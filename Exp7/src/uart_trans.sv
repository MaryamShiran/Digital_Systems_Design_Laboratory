module uart_trans #(
    parameter int CLOCK_RATE = 50_000_000,
    parameter int BAUD_RATE  = 115200
) (
    input clk,
    input rst,
    input [7:0] data,
    output reg tx
);
    localparam int BAUD_DELAY = (CLOCK_RATE / BAUD_RATE) - 1;
    localparam int BAUD_DELAY0 = (CLOCK_RATE / BAUD_RATE / 2) - 1;

    localparam int IDLE_STOP = 0;
    localparam int START = 1;
    localparam int DATA = 2;
    localparam int PARITY = 3;


    reg [ 1:0] state;
    reg [ 2:0] idx;
    reg [31:0] delay;

    always @(posedge clk, negedge rst) begin
        if (!rst) begin
            delay <= 0;
            state <= 0;
            idx   <= 0;
            tx    <= 1;
        end else begin
            if (|delay) begin
                delay <= delay - 1;
            end else begin
                case (state)
                    IDLE_STOP: begin
                        delay <= BAUD_DELAY;
                        state <= state + 1;
                        tx    <= 1;
                    end
                    START: begin
                        delay <= BAUD_DELAY;
                        state <= state + 1;
                        tx    <= 0;
                    end
                    DATA: begin
                        delay <= BAUD_DELAY;
                        tx    <= data[idx];
                        idx   <= idx + 1;
                        state <= state + &idx;
                    end
                    PARITY: begin
                        delay <= BAUD_DELAY;
                        tx    <= ^data;
                        state <= state + 1;
                    end
                endcase
            end
        end
    end

endmodule

module uart_rcv #(
    parameter int CLOCK_RATE = 50_000_000,
    parameter int BAUD_RATE  = 115200
) (
    input clk,
    input rst,
    output reg [7:0] data,
    output reg parity,
    input rx
);
    localparam int BAUD_DELAY = (CLOCK_RATE / BAUD_RATE) - 1;
    localparam int BAUD_DELAY0 = (CLOCK_RATE / BAUD_RATE / 2) - 1;

    localparam int IDLE_STOP = 0;
    localparam int START = 1;
    localparam int DATA = 2;
    localparam int PARITY = 3;


    reg [1:0] state;
    reg [2:0] idx;
    reg [31:0] delay;
    reg prx;

    always @(posedge clk, negedge rst) begin
        if (!rst) begin
            delay  <= 0;
            state  <= 0;
            idx    <= 0;
            data   <= 0;
            parity <= 0;
        end else begin
            prx <= rx;
            if (|delay) begin
                delay <= delay - 1;
            end else begin
                case (state)
                    IDLE_STOP: begin
                        if (!rx && prx) begin
                            delay <= BAUD_DELAY0;
                            state <= state + 1;
                        end
                    end
                    START: begin
                        delay <= BAUD_DELAY;
                        state <= state + 1;
                    end
                    DATA: begin
                        delay     <= BAUD_DELAY;
                        idx       <= idx + 1;
                        state     <= state + &idx;
                        data[idx] <= rx;
                    end
                    PARITY: begin
                        delay  <= BAUD_DELAY;
                        parity <= rx;
                        state  <= state + 1;
                    end
                endcase
            end
        end
    end

endmodule

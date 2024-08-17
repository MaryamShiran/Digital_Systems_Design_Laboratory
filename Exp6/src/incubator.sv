module incubator (
    input clk,
    input rst,
    input [7:0] t,
    output reg heater,
    output reg cooler,
    output reg [3:0] crs
);
    reg sm;
    reg [1:0] state0;
    reg [1:0] state1;

    always_ff @(posedge clk, negedge rst) begin
        if (!rst) begin
            sm <= 0;
            state0 <= 0;
            state1 <= 0;
        end else begin
            if (sm == 0) begin
                if (state0 == 0) begin
                    if (t < 15) begin
                        state0 <= 2;
                    end else if (t > 35) begin
                        state0 <= 1;
                        sm <= 1;
                        state1 <= 0;
                    end
                end else if (state0 == 1) begin
                    if (t < 25) begin
                        state0 <= 0;
                    end
                end else begin
                    if (t > 30) begin
                        state0 <= 0;
                    end
                end
            end else begin
                if (state1 == 0) begin
                    if (t > 35) begin
                        state1 <= state1 + 1;
                    end
                end else if (state1 == 1) begin
                    if (t > 40) begin
                        state1 <= state1 + 1;
                    end else if (t < 25) begin
                        state1 <= state1 - 1;
                        sm <= 0;
                    end
                end else if (state1 == 2) begin
                    if (t > 45) begin
                        state1 <= state1 + 1;
                    end else if (t < 35) begin
                        state1 <= state1 - 1;
                    end
                end else begin
                    if (t < 40) begin
                        state1 <= state1 - 1;
                    end
                end
            end
        end
    end

    always_comb begin
        if (state0 == 0) begin
            cooler = 0;
            heater = 0;
        end else if (state0 == 1) begin
            cooler = 1;
            heater = 0;
        end else begin
            heater = 1;
            cooler = 0;
        end

        if (state1 == 0) begin
            crs = 0;
        end else if (state1 == 1) begin
            crs = 4;
        end else if (state1 == 2) begin
            crs = 6;
        end else begin
            crs = 8;
        end
    end
endmodule

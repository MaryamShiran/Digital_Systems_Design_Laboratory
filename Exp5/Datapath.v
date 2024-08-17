module Datapath (
    input clk,
    input rst,
    input done,
    input op,
    input [3:0] multiplier,
    input [3:0] multiplicand,
    input [2:0] shift_a,
    input [2:0] shift_b,
    output reg [7:0] result,
    output reg [3:0] B
);
    reg [7:0] A;

    always @(posedge clk, negedge rst) begin
        if (~rst) begin
            A <= {{4{multiplicand[3]}},multiplicand};
            B <= {{4{multiplier[3]}},multiplier};
            result <= 0;
        end
        else if (~done) begin
            B <= B >> shift_b;
            if (op) begin
                result <= result + (A << shift_a);
            end
            else begin
                result <= result - (A << shift_a);
            end
        end
    end
    
endmodule

module Booth (
    input [3:0] multiplicand,
    input [3:0] multiplier,
    input clk,
    input rst,
    output done,
    output [7:0] result
);
    wire [3:0] B;
    wire [2:0] shift_a, shift_b;

    CU cu (
        .clk(clk),
        .rst(rst),
        .done(done),
        .op(op),
        .shift_a(shift_a),
        .shift_b(shift_b),
        .B(B)
    );

    Datapath dp (
        .clk(clk),
        .rst(rst),
        .done(done),
        .op(op),
        .multiplicand(multiplicand),
        .multiplier(multiplier),
        .shift_a(shift_a),
        .shift_b(shift_b),
        .B(B),
        .result(result)
    );
    
endmodule

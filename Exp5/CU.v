module CU (
    input clk,
    input rst,
    output op,
    output done,
    input [3:0] B,
    output [2:0] shift_a,
    output [2:0] shift_b
);
    wire [2:0] index0, index1;
    reg [2:0] total_shift;
    reg [2:0] start;

    First_indices fi (
        .num(B),
        .index0(index0),
        .index1(index1)
    );

    assign shift_a = total_shift + shift_b;
    assign shift_b = op ? index0 : index1;

    assign op = start & B[0];
    assign done = shift_a >= 4;

    always @(posedge clk, negedge rst) begin
        if (~rst) begin
            total_shift <= 0;
            start <= 0;
        end
        else begin
            start <= 1;
            total_shift <= total_shift + shift_b;
        end
    end
    
endmodule

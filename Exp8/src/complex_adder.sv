module complex_adder (
    input [15:0] a,
    input [15:0] b,
    input addnot_sub,
    output reg [15:0] c
);
    always_comb begin
        if (addnot_sub) begin
            c[15:8] = a[15:8] - b[15:8];
            c[7:0]  = a[7:0] - b[7:0];
        end else begin
            c[15:8] = a[15:8] + b[15:8];
            c[7:0]  = a[7:0] + b[7:0];
        end
    end
endmodule

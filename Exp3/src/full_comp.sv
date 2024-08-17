module full_comp #(
    parameter N = 4
) (
    input [N-1:0] a,
    input [N-1:0] b,
    output g,
    output e,
    output s
);
    wire [N:0] midg, mide, mids;
    assign midg[N] = 0;
    assign mide[N] = 1;
    assign mids[N] = 0;
    generate
        genvar i;
        for (i = N; i > 0; i = i - 1) begin : casc
            casc_comp _casc (
                .i_g(midg[i]),
                .i_e(mide[i]),
                .i_s(mids[i]),
                .a  (a[i-1]),
                .b  (b[i-1]),
                .o_g(midg[i-1]),
                .o_e(mide[i-1]),
                .o_s(mids[i-1])
            );
        end
    endgenerate
    assign g = midg[0];
    assign e = mide[0];
    assign s = mids[0];
endmodule


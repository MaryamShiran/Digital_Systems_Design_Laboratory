module serial_comp (
    input  serial_a,
    input  serial_b,
    input  clk,
    input  rst,
    output g,
    output e,
    output s
);
    wire mg = rst ? 0 : clk ? mg : g;
    wire qg = rst ? 0 : clk ? mg : qg;
    wire me = rst ? 1 : clk ? me : e;
    wire qe = rst ? 1 : clk ? me : qe;
    wire ms = rst ? 0 : clk ? ms : s;
    wire qs = rst ? 0 : clk ? ms : qs;

    casc_comp _cmp (
        .i_g(qg),
        .i_e(qe),
        .i_s(qs),
        .a  (serial_a),
        .b  (serial_b),
        .o_g(g),
        .o_e(e),
        .o_s(s)
    );
endmodule


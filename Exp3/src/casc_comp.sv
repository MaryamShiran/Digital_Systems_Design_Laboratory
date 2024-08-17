module casc_comp (
    input  i_g,
    input  i_e,
    input  i_s,
    input  a,
    input  b,
    output o_g,
    output o_e,
    output o_s
);
    assign o_g = i_g || i_e && (a && ~b);
    assign o_e = i_e && (a ^ ~b);
    assign o_s = i_s || i_e && (~a && b);
endmodule


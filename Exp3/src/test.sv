module test ();
    reg [3:0] a, b;
    wire g, e, s;
    full_comp _comp (
        .a(a),
        .b(b),
        .g(g),
        .e(e),
        .s(s)
    );

    initial begin
        $monitor("%d vs %d => %b%b%b", a, b, g, e, s);
        a = 12;
        b = 12;
        #1 a = 14;
        #1 b = 4;
        #1 a = 3;
        #1 b = 3;
        #1 a = 7;
        #1 b = 15;
        #1 a = 8;
        $finish();
    end
endmodule

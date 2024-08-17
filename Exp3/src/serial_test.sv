module serial_test ();

    reg a, b, clk, rst;
    wire g, e, s;
    serial_comp _comp (
        .serial_a(a),
        .serial_b(b),
        .clk(clk),
        .rst(rst),
        .g(g),
        .e(e),
        .s(s)
    );
    always #1 clk = !clk;
    initial begin
        $monitor(a, b, " => ", g, e, s);
        clk = 0;
        a   = 0;
        b   = 0;
        rst = 1;
        $display("reset");
        #2 rst = 0;
        a = 0;
        b = 0;
        #2 a = 1;
        b = 1;
        #2 a = 0;
        b = 0;
        #2 a = 1;
        b = 1;
        #2 a = 1;
        b = 0;
        #2 rst = 1;
        $display("reset");
        #2 rst = 0;
        a = 0;
        b = 0;
        #2 a = 0;
        b = 1;
        #2 a = 1;
        b = 0;
        #2 a = 0;
        b = 0;
        #2 rst = 1;
        $display("reset");
        #2 rst = 0;
        a = 1;
        b = 0;
        #2 a = 0;
        b = 0;
        #2 a = 0;
        b = 1;
        #2 a = 1;
        b = 1;
        #2 $finish();
    end
endmodule

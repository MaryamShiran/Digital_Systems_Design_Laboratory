module mult_test ();
    reg signed [15:0] a, b;
    wire signed [31:0] c;
    wire ready;
    reg clk, rst, start;
    mult _mult (
        .a(a),
        .b(b),
        .clk(clk),
        .rst(rst),
        .start(start),
        .ready(ready),
        .c(c)
    );
    always #1 clk <= !clk;
    initial begin
        rst   = 0;
        clk   = 0;
        start = 0;

        #2 rst = 1;

        a = 49;
        b = 23;
        start = 1;
        #4 start = 0;
        wait (ready) $display("%d %d => %d", a, b, c);

        a = ~a + 1;
        b = b;
        start = 1;
        #4 start = 0;
        wait (ready) $display("%d %d => %d", a, b, c);


        a = a;
        b = ~b + 1;
        start = 1;
        #4 start = 0;
        wait (ready) $display("%d %d => %d", a, b, c);


        a = ~a + 1;
        b = b;
        start = 1;
        #4 start = 0;
        wait (ready) $display("%d %d => %d", a, b, c);

        $finish(0);
    end
endmodule

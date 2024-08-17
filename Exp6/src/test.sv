module test ();
    reg [7:0] t;
    reg clk, rst;
    wire heater, cooler;
    wire [3:0] crs;
    incubator _inc (
        .t(t),
        .clk(clk),
        .rst(rst),
        .crs(crs),
        .heater(heater),
        .cooler(cooler)
    );

    always #1 clk = !clk;
    initial begin
        $monitor("state : ", _inc.sm, " ", _inc.state0, " ", _inc.state1, " status : ", heater,
                 " ", cooler);
        clk = 0;
        rst = 0;
        #2;
        rst = 1;
        t   = 80;
        #20;
        t = 0;
        #20;
        $finish(0);
    end
endmodule

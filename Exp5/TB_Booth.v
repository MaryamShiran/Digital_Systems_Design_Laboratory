module TB_Booth ();
    reg clk = 1;
    reg rst = 1;
    reg signed [3:0] multiplicand;
    reg signed [3:0] multiplier;
    wire done;
    wire signed [7:0] result;

    Booth booth (
        .clk(clk),
        .rst(rst),
        .multiplicand(multiplicand),
        .multiplier(multiplier),
        .done(done),
        .result(result)
    );

    always begin
        #5 clk <= ~clk;
    end

    initial begin

        multiplicand=5; multiplier=3;
        rst=0;
        #10 rst=1;
        wait(done);

        $display("time: %d multiplicand: %d multiplier: %d result: %d",
        $time ,multiplicand, multiplier, result);

        multiplicand=3; multiplier=5;
        rst=0;
        #10 rst=1;
        wait(done);

        $display("time: %d multiplicand: %d multiplier: %d result: %d",
        $time ,multiplicand, multiplier, result);

        multiplicand=8; multiplier=7;
        rst=0;
        #10 rst=1;
        wait(done);

        $display("time: %d multiplicand: %d multiplier: %d result: %d",
        $time ,multiplicand, multiplier, result);

        multiplicand=-7; multiplier=-5;
        rst=0;
        #10 rst=1;
        wait(done);

        $display("time: %d multiplicand: %d multiplier: %d result: %d",
        $time ,multiplicand, multiplier, result);

        multiplicand=3; multiplier=-6;
        rst=0;
        #10 rst=1;
        wait(done);

        $display("time: %d multiplicand: %d multiplier: %d result: %d",
        $time ,multiplicand, multiplier, result);
                
        multiplicand=6; multiplier=-1;
        rst=0;
        #10 rst=1;
        wait(done);

        $display("time: %d multiplicand: %d multiplier: %d result: %d",
        $time ,multiplicand, multiplier, result);

        multiplicand= 7; multiplier=1;
        rst=0;
        #10 rst=1;
        wait(done);

        $display("time: %d multiplicand: %d multiplier: %d result: %d",
        $time ,multiplicand, multiplier, result);

        multiplicand=0; multiplier=6;
        rst=0;
        #10 rst=1;
        wait(done);

        $display("time: %d multiplicand: %d multiplier: %d result: %d",
        $time ,multiplicand, multiplier, result);

        $stop();

    end

endmodule

module test ();
    reg clk0, clk1, rst0, rst1;
    reg  [7:0] tData;
    wire [7:0] rData;
    wire       rParity;


    wire       tx_rx;
    uart_trans #(
        .CLOCK_RATE(16),
        .BAUD_RATE (4)
    ) transmitter (
        .tx  (tx_rx),
        .clk (clk0),
        .rst (rst0),
        .data(tData)
    );

    uart_rcv #(
        .CLOCK_RATE(8),
        .BAUD_RATE (4)
    ) receiver (
        .rx(tx_rx),
        .clk(clk1),
        .rst(rst1),
        .data(rData),
        .parity(rParity)
    );

    // generating clk0!=clk1
    initial clk0 = 0;
    always #1 clk0 = !clk0;
    initial clk1 = 0;
    always #2 clk1 = !clk1;



    initial begin
        $monitor($time, " --  transmit : ", tData, " receive : ", rData, ",", rParity,
                 "  r-error : ", ^rData ^ rParity);
        rst0  = 0;
        rst1  = 0;
        tData = 8'b0000_0000;
        #1;
        rst0 = 1;
        rst1 = 1;

        #8 wait (transmitter.state == 0 && transmitter.delay == 0) tData = 8'b1111_1111;
        #8 wait (transmitter.state == 0 && transmitter.delay == 0) tData = 8'b0000_0000;
        #8 wait (transmitter.state == 0 && transmitter.delay == 0) tData = 8'b0101_0101;
        #8 wait (transmitter.state == 0 && transmitter.delay == 0) tData = 8'b1100_1010;
        #8 wait (transmitter.state == 0 && transmitter.delay == 0) tData = 8'b0010_1100;
        #8 wait (transmitter.state == 0 && transmitter.delay == 0) tData = 8'b1000_0010;
        #8 wait (receiver.state == 0 && receiver.delay == 0);
        #8 wait (receiver.state == 0 && receiver.delay == 0);
        $finish(0);
    end
endmodule

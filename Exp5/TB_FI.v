module TB_FI ();
    reg [3:0] num;
    wire [1:0] index0;
    wire [1:0] index1;
    
    First_indices fi (
        .num(num),
        .index0(index0),
        .index1(index1)
    );


    initial begin
        num = 12;
        #10;
        num = 15;
        #10
        num = 7;
        #10
        $stop();
    end

    initial begin
        $monitor("number: %d", num, " index 0: %d", index0, " index 1: %d", index1);
    end
endmodule

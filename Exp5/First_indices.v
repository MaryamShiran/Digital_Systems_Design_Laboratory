module First_indices (
    input [3:0] num,
    output [2:0] index0,
    output [2:0] index1
);
    assign index0 = 
    num[0] ? (num[1] ? (num[2] ? (num[3] ? 4 : 3) : 2) : 1) : 0;
    assign index1 =
     ~num[0] ? (~num[1] ? (~num[2] ? (~num[3] ? 4 : 3) : 2) : 1) : 0;
    
endmodule

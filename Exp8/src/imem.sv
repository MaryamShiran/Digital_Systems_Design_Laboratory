module imem (
    input [4:0] address,
    output op,
    output [4:0] src0,
    output [4:0] src1,
    output [4:0] dst
);
    reg [15:0] data[31:0];
    assign op   = data[address][15];
    assign dst  = data[address][14:10];
    assign src1 = data[address][9:5];
    assign src0 = data[address][4:0];
    initial begin
        // instructions
        data[0] = 16'b1_00100_00001_00000;  // mem[4] = mem[0] * mem[1] = (1 + 2i) * (3 + 4i) = -5 + 10i = 11111011 00001010
        data[1] = 16'b0_00101_00000_00000;  // mem[5] = mem[0] + mem[0] = (1 + 2i) + (1 + 2i) = 2 + 4i =   00000010 00000100
        data[2] = 16'b1_00110_00010_00001;  // mem[6] = mem[2] * mem[1] = (i) * (3 + 4i) = -4 + 3i =       11111100 00000011
        data[3] = 16'b0_00111_00010_00011;  // mem[7] = mem[2] + mem[3] = (i) + (1) = 1 + i =              00000001 00000001
    end
endmodule


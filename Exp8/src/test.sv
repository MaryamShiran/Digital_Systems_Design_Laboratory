module test ();
    reg clk, rst;
    pipeline _cpu (
        .clk(clk),
        .rst(rst)
    );

    always #1 clk <= !clk;
    initial begin
        // $monitor($time, " -- ", "PC: %d\n", _cpu.PC, "INST: %b%b%b%b\n", _cpu.imem_op,
        //          _cpu.imem_dst, _cpu.imem_src0, _cpu.imem_src1, "READ: %b,%b\n", _cpu.dmem_data0,
        //          _cpu.dmem_data1, "ALU: r/%d | %b\n", _cpu.alu_ready, _cpu.alu_res,
        //          "MEM : %b,%b,%b,%b,%b,%b,%b,%b", _cpu._dmem.data[0], _cpu._dmem.data[1],
        //          _cpu._dmem.data[2], _cpu._dmem.data[3], _cpu._dmem.data[4], _cpu._dmem.data[5],
        //          _cpu._dmem.data[6], _cpu._dmem.data[7]);
        $monitor($time, " -- ", "MEM : %b,%b,%b,%b,%b,%b,%b,%b", _cpu._dmem.data[0],
                 _cpu._dmem.data[1], _cpu._dmem.data[2], _cpu._dmem.data[3], _cpu._dmem.data[4],
                 _cpu._dmem.data[5], _cpu._dmem.data[6], _cpu._dmem.data[7]);
        clk = 0;
        rst = 0;
        #2 rst = 1;

        #2;  // IFETCH
        #2;  // DFETCH
        #2;  // EXEC
        #2;  // WB
    end
endmodule

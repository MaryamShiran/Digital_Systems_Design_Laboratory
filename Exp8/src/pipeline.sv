module pipeline (
    input clk,
    input rst
);
    reg [4:0] PC;
    wire imem_op;
    wire [4:0] imem_src0;
    wire [4:0] imem_src1;
    wire [4:0] imem_dst;

    reg DMEM_valid;
    reg DMEM_op;
    reg [4:0] DMEM_src0;
    reg [4:0] DMEM_src1;
    reg [4:0] DMEM_dst;
    wire [15:0] dmem_data0;
    wire [15:0] dmem_data1;

    reg ALU_valid;
    reg ALU_op;
    reg [4:0] ALU_dst;
    reg [15:0] ALU_data0;
    reg [15:0] ALU_data1;
    reg ALU_start;
    wire [15:0] add_res;
    wire [15:0] mul_res;
    wire mul_ready;
    wire [15:0] alu_res = ALU_op ? mul_res : add_res;
    wire alu_ready = ALU_valid ? ALU_op ? mul_ready : 1 : 1;

    reg WB_write;
    reg [4:0] WB_dst;
    reg [15:0] WB_data;

    always @(posedge clk, negedge rst) begin
        if (rst == 0) PC <= 0;
        else if (alu_ready) PC <= PC + 1;
    end

    always @(posedge clk, negedge rst)
        if (rst == 0) begin
            DMEM_valid <= 0;
        end else if (alu_ready) begin
            DMEM_valid <= 1;
            DMEM_op    <= imem_op;
            DMEM_src0  <= imem_src0;
            DMEM_src1  <= imem_src1;
            DMEM_dst   <= imem_dst;
        end else begin
        end

    always @(posedge clk, negedge rst)
        if (rst == 0) begin
            ALU_valid <= 0;
        end else if (alu_ready) begin
            ALU_valid <= DMEM_valid;
            ALU_op <= DMEM_op;
            ALU_dst <= DMEM_dst;
            ALU_data0 <= dmem_data0;
            ALU_data1 <= dmem_data1;
            ALU_start <= 1;
        end else begin
            ALU_start <= 0;
        end

    always_comb
        if (rst == 1 && alu_ready) begin
            WB_write = ALU_valid;
            WB_data  = alu_res;
            WB_dst   = ALU_dst;
        end else begin
            WB_write = 0;
            WB_data  = 0;
            WB_dst   = 0;
        end




    imem _imem (
        .address(PC),
        .op(imem_op),
        .src0(imem_src0),
        .src1(imem_src1),
        .dst(imem_dst)
    );


    dmem _dmem (
        .read_address0(DMEM_src0),
        .read_address1(DMEM_src1),
        .read_data0(dmem_data0),
        .read_data1(dmem_data1),

        .write_address(WB_dst),
        .write_data(WB_data),
        .write(WB_write),

        .clk(clk)
    );

    complex_adder _adder (
        .a(ALU_data0),
        .b(ALU_data1),
        .c(add_res),
        .addnot_sub(0)
    );
    complex_mult _mult (
        .a(ALU_data0),
        .b(ALU_data1),
        .c(mul_res),
        .ready(mul_ready),
        .start(ALU_start),
        .clk(clk),
        .rst(rst)
    );
endmodule

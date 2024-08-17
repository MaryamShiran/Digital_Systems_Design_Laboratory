module dmem (
    input [4:0] read_address0,
    input [4:0] read_address1,
    input [4:0] write_address,
    output [15:0] read_data0,
    output [15:0] read_data1,
    input write,
    input [15:0] write_data,
    input clk
);
    reg [15:0] data[31:0];
    assign read_data0 = data[read_address0];
    assign read_data1 = data[read_address1];
    initial begin
        // initial data
        data[0] = {8'd1, 8'd2};  // 1 + 2i
        data[1] = {8'd3, 8'd4};  // 3 + 4i
        data[2] = {8'd0, 8'd1};  // i
        data[3] = {8'd1, 8'd0};  // 1
    end
    always @(posedge clk) begin
        if (write) data[write_address] <= write_data;
    end
endmodule

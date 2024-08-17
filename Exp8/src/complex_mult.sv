module complex_mult (
    input [15:0] a,
    input [15:0] b,
    input clk,
    input rst,
    input start,
    output ready,
    output [15:0] c
);
    // c.x = a.x b.x - a.y b.y
    // c.y = a.x b.y + a.y b.x
    wire [7:0] ax = a[15:8];
    wire [7:0] bx = b[15:8];
    wire [7:0] ay = a[7:0];
    wire [7:0] by = b[7:0];

    wire [7:0] axbx, axby, aybx, ayby;
    wire rxx, rxy, ryx, ryy;

    assign c[15:8] = axbx - ayby;
    assign c[7:0]  = axby + aybx;
    assign ready   = rxx && rxy && ryx && ryy;
    mult #(
        .M(8)
    ) _axbx (
        .a(ax),
        .b(bx),
        .start(start),
        .rst(rst),
        .clk(clk),
        .c(axbx),
        .ready(rxx)
    );

    mult #(
        .M(8)
    ) _axby (
        .a(ax),
        .b(by),
        .start(start),
        .rst(rst),
        .clk(clk),
        .c(axby),
        .ready(rxy)
    );

    mult #(
        .M(8)
    ) _aybx (
        .a(ay),
        .b(bx),
        .start(start),
        .rst(rst),
        .clk(clk),
        .c(aybx),
        .ready(ryx)
    );

    mult #(
        .M(8)
    ) _ayby (
        .a(ay),
        .b(by),
        .start(start),
        .rst(rst),
        .clk(clk),
        .c(ayby),
        .ready(ryy)
    );
endmodule

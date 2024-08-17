module mult #(
    parameter N = 8,
    parameter M = 2 * N
) (
    input [N-1:0] a,
    input [N-1:0] b,
    input clk,
    input rst,
    input start,
    output reg ready,
    output reg [M-1:0] c
);
    function [M-1:0] ext(input [N-1:0] in);
        ext[M-1:N-1] = {M - N + 1{in[N-1]}};
        ext[N-2:0]   = in[N-2:0];
    endfunction

    reg [N-1:0] aa;
    reg [M-1:0] bb;
    always_ff @(posedge clk, negedge rst) begin
        if (!rst) begin
            aa <= 0;
            bb <= 0;
            c <= 0;
            ready <= 1;
        end else begin
            if (start) begin
                c <= 0;
                if (a[N-1]) begin
                    aa <= ~a + 1;
                    bb <= ~ext(b) + 1;
                end else begin
                    aa <= a;
                    bb <= ext(b);
                end
                ready <= 0;
            end else begin
                if (~|aa) ready <= 1;
                if (aa[0]) c <= c + bb;
                aa <= aa >> 1;
                bb <= bb << 1;
            end
        end
    end
endmodule

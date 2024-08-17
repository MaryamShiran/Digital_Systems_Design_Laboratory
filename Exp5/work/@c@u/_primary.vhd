library verilog;
use verilog.vl_types.all;
entity CU is
    port(
        clk             : in     vl_logic;
        rst             : in     vl_logic;
        op              : out    vl_logic;
        done            : out    vl_logic;
        B               : in     vl_logic_vector(3 downto 0);
        shift_a         : out    vl_logic_vector(2 downto 0);
        shift_b         : out    vl_logic_vector(2 downto 0)
    );
end CU;

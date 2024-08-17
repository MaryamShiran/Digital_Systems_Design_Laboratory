library verilog;
use verilog.vl_types.all;
entity Datapath is
    port(
        clk             : in     vl_logic;
        rst             : in     vl_logic;
        done            : in     vl_logic;
        op              : in     vl_logic;
        multiplier      : in     vl_logic_vector(3 downto 0);
        multiplicand    : in     vl_logic_vector(3 downto 0);
        shift_a         : in     vl_logic_vector(2 downto 0);
        shift_b         : in     vl_logic_vector(2 downto 0);
        result          : out    vl_logic_vector(7 downto 0);
        B               : out    vl_logic_vector(3 downto 0)
    );
end Datapath;

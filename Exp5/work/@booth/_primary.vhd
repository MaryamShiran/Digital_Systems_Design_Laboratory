library verilog;
use verilog.vl_types.all;
entity Booth is
    port(
        multiplicand    : in     vl_logic_vector(3 downto 0);
        multiplier      : in     vl_logic_vector(3 downto 0);
        clk             : in     vl_logic;
        rst             : in     vl_logic;
        done            : out    vl_logic;
        result          : out    vl_logic_vector(7 downto 0)
    );
end Booth;

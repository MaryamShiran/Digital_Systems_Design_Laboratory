library verilog;
use verilog.vl_types.all;
entity First_indices is
    port(
        num             : in     vl_logic_vector(3 downto 0);
        index0          : out    vl_logic_vector(2 downto 0);
        index1          : out    vl_logic_vector(2 downto 0)
    );
end First_indices;

module testbench; 
 
  // Declare testbench signals 
  reg clk;                // Clock signal 
  reg rstN;               // Reset signal (active low) 
  reg [3:0] data_in;      // 4-bit data input 
  reg push;               // Push control signal 
  reg pop;                // Pop control signal 
   
  // Output signals from the stack module 
  wire [3:0] data_out;    // 4-bit data output 
  wire full;              // Full flag 
  wire empty;             // Empty flag 
   
  // Clock period constant 
  localparam CLK_PERIOD = 10; 
   
  // Generate clock signal with a period of CLK_PERIOD 
  always #(CLK_PERIOD/2) clk = ~clk;
// Instantiate the stack_behavioural module 
stack_behavioural sb ( 
.clk(clk),  
.rstN(rstN),  
.data_in(data_in),  
.push(push),  
.pop(pop),  
.data_out(data_out),  
.full(full),  
.empty(empty) 
); 
// Initial block for setup 
initial begin 
clk = 0;           
push = 0;          
pop = 0;           
rstN = 0;          
// Initialize clock signal 
// Initialize push signal 
// Initialize pop signal 
// Initialize reset signal (active low) 
data_in = 4'b0000; // Initialize data input to 0 
$dumpfile("testbench.vcd"); // Specify VCD file for waveform dump 
$dumpvars(0, testbench);    // Dump all variables in the testbench module 
end 
// Initial block for test sequence 
initial begin 
rstN = 0; // Assert reset signal to reset the stack 
#(CLK_PERIOD*2); // Wait for 2 clock cycles 
 rstN = 1; // Deassert reset signal to start normal operation 
pop = 1; // Attempt to pop from empty stack 
#(CLK_PERIOD*3); // Wait for 3 clock cycles 
pop = 0; // Deassert pop signal 
push = 1; // Assert push signal 
data_in = 4'b1101; // Load 13 into data input 
#(CLK_PERIOD*1); // Wait for 1 clock cycle 
data_in = 4'b1111; // Load 15 into data input 
#(CLK_PERIOD*1); // Wait for 1 clock cycle 
data_in = 4'b0010; // Load 2 into data input 
#(CLK_PERIOD*1); // Wait for 1 clock cycle 
data_in = 4'b1001; // Load 9 into data input 
#(CLK_PERIOD*1); // Wait for 1 clock cycle 
push = 0; // Deassert push signal 
pop = 1; // Assert pop signal 
#(CLK_PERIOD*1); // Wait for 1 clock cycle 
push = 1; // Assert push signal 
pop = 0; // Deassert pop signal 
data_in = 4'b0011; // Load 3 into data input
    #(CLK_PERIOD*1); // Wait for 1 clock cycle 
    data_in = 4'b1001; // Load 9 into data input 
     
    #(CLK_PERIOD*1); // Wait for 1 clock cycle 
    push = 0; // Deassert push signal 
    pop = 1; // Assert pop signal 
     
    #(CLK_PERIOD*8.5); // Wait for 8.5 clock cycles 
    $finish; // End simulation 
  end 
 
endmodule 
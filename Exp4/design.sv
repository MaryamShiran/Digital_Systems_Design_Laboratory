module stack_behavioural ( 
input clk,                
input rstN,               
// Clock signal 
// Active-low reset signal 
input [3:0] data_in,      
input push,               
input pop,                
// Data input for push operation 
// Push operation signal 
// Pop operation signal 
output reg [3:0] data_out, // Data output for pop operation 
output reg full,          
output reg empty          
); 
// Flag indicating if the stack is full 
// Flag indicating if the stack is empty 
// Define an 8-depth stack memory with 4-bit wide data 
reg [3:0] stack_mem [7:0];
// Stack pointer to keep track of the stack position, points to the last free index in memory 
reg [3:0] stack_pointer; 
 
// Integer variable for loop indexing 
integer i; 
 
// Always block triggered on the positive edge of the clock 
always @(posedge clk) begin 
    if (!rstN) begin   // If reset signal is active (low) 
        // Initialize the stack memory to zero 
        for (i = 0; i < 8; i = i + 1) begin 
            stack_mem[i] <= 0; 
        end 
        // Reset the stack pointer to zero 
        stack_pointer <= 0; 
        // Set the full flag to 0 (stack is not full) 
        full <= 0; 
        // Set the empty flag to 1 (stack is empty) 
        empty <= 1; 
    end else begin 
        // If push signal is active, pop signal is not active, and stack is not full 
        if (push && !pop && !full) begin 
            // Push the data into the stack memory at the current stack pointer position 
            stack_mem[stack_pointer] <= data_in; 
            // Increment the stack pointer 
            stack_pointer <= stack_pointer + 1; 
            // Update the full flag: stack is full if stack pointer is 8 
            full <= (stack_pointer == 8); 
            // Update the empty flag: stack is empty if stack pointer is 0 
            empty <= 0; 
        end  
        // If pop signal is active, push signal is not active, and stack is not empty 
        else if (pop && !push && !empty) begin 
            // Decrement the stack pointer 
            stack_pointer <= stack_pointer - 1; 
            // Pop the data from the stack memory at the new stack pointer position 
            data_out <= stack_mem[stack_pointer]; 
            // Update the full flag: stack is full if stack pointer is 8 
            full <= 0; 
            // Update the empty flag: stack is empty if stack pointer is 0 
            empty <= (stack_pointer == 0); 
        end 
    end 
end 
 
endmodule 
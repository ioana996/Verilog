`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:35:13 05/12/2017
// Design Name:   final
// Module Name:   C:/Users/student/bandaAsamblare/test.v
// Project Name:  bandaAsamblare
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: final
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg x;
	reg t;
	reg y;
	reg reset;
	reg clk;

	// Outputs
	wire z;

	// Instantiate the Unit Under Test (UUT)
	final uut (
		.x(x), 
		.t(t), 
		.y(y), 
		.z(z), 
		.reset(reset), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		x = 1;
		t = 1;
		y = 1;
		reset = 0;
		clk = 1;
		
		// Wait 100 ns for global reset to finish
		#100;
     
		x = 0;
		t = 1;
		y = 1;
		//reset = 1;
		
		
		#100;
     
		x = 1;
		t = 1;
		y = 0;
		//reset = 1;
		
		
		#100;
     
		x = 1;
		t = 1;
		y = 0;
		//reset = 1;
		
		#100;
     
		x = 0;
		t = 0;
		y = 0;
		//reset = 0;
		// Add stimulus here

	end
      always #20 clk = ~clk;
endmodule


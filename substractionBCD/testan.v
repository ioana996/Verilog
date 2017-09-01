`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:59:04 04/21/2017
// Design Name:   subs
// Module Name:   C:/Users/student/subs/testan.v
// Project Name:  subs
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: subs
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testan;

	// Inputs
	reg [3:0] x;
	reg [3:0] y;
	reg [3:0] z;
	reg [15:0] sc;
	reg clk;

	// Outputs
	wire [15:0] out;

	// Instantiate the Unit Under Test (UUT)
	subs uut (
		.x(x), 
		.y(y), 
		.z(z), 
		.sc(sc), 
		.out(out), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		x = 0;
		y = 0;
		z = 0;
		sc = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
       x = 3;
		 y = 5;
		 z = 7;
		 sc = 432;
		// Add stimulus here

	end
      
endmodule


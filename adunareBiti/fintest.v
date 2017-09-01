`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:08:53 05/05/2017
// Design Name:   final
// Module Name:   C:/Users/student/adunareBiti/fintest.v
// Project Name:  adunareBiti
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

module fintest;

	// Inputs
	reg [15:0] x;
	reg [15:0] y;
	reg c0;

	// Outputs
	wire c4;
	wire [15:0] s;

	// Instantiate the Unit Under Test (UUT)
	final uut (
		.x(x), 
		.y(y), 
		.c4(c4), 
		.s(s), 
		.c0(c0)
	);

	initial begin
		// Initialize Inputs
		x = 16'b0001101000110011;
		y = 16'b1110010111101011;
		c0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule


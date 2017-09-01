`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:39:23 05/05/2017
// Design Name:   aduna
// Module Name:   C:/Users/student/adunareBiti/test.v
// Project Name:  adunareBiti
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: aduna
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
	reg [3:0] x;
	reg [3:0] y;

	// Outputs
	wire c4;
	wire [3:0] s;

	// Instantiate the Unit Under Test (UUT)
	aduna uut (
		.x(x), 
		.y(y), 
		.c4(c4), 
		.s(s)
	);

	initial begin
		// Initialize Inputs
		x = 1001;
		y = 0000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule


`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:55:25 03/30/2017
// Design Name:   automat
// Module Name:   D:/teme_vineri/lab05/tets_aut_stroinea/tst.v
// Project Name:  tets_aut_stroinea
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: automat
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tst;

	// Inputs
	reg b1;
	reg b2;
	reg b3;
	reg clk;

	// Outputs
	wire eb1;
	wire eb2;
	wire ebs;
	wire [3:0] rest;

	// Instantiate the Unit Under Test (UUT)
	automat uut (
		.b1(b1), 
		.b2(b2), 
		.b3(b3), 
		.eb1(eb1), 
		.eb2(eb2), 
		.ebs(ebs), 
		.clk(clk), 
		.rest(rest)
	);

	initial begin
		// Initialize Inputs
		b1 = 0;
		b2 = 0;
		b3 = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		b3 = 1;
	end
      always #20 clk = ~clk;
endmodule


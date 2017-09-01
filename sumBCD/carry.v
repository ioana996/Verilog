`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:25:24 03/31/2017
// Design Name:   sum
// Module Name:   C:/Users/student/Downloads/t1_stroinea_nita/BCD/carry.v
// Project Name:  BCD
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sum
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module carry;

	// Inputs
	reg carry;
	reg [3:0] x;
	reg [3:0] y;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	sum uut (
		.carry(carry), 
		.x(x), 
		.y(y), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		carry = 0;
		x = 0;
		y = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
			x = 4'b1001;
			y = 4'b1000;
	end
      
endmodule


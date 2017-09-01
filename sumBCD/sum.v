`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:53:13 03/31/2017 
// Design Name: 
// Module Name:    sum 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
/*module sum(carry, x, y, out);
	input [3:0] x;
	input [3:0] y;
	input carry;
	output reg [7:0] out = 8'b00000000;
	
	always@(*)
		begin
		out = x + y + carry;
		if(out > 9)
			begin
				out = out + 6;
			end
		end
endmodule*/

module sum(carry, x, y, out);
	input [3:0] x;
	input [3:0] y;
	input carry;
	output reg [3:0] out = 4'b0000;
	
	always@(*)
		begin
		out = x + y + carry;
		if(out > 9)
			begin
				//$display("mesaj");
				out = out + 6;
			end
		end
endmodule


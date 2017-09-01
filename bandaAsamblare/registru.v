`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:17:29 05/12/2017 
// Design Name: 
// Module Name:    registru 
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
module registru(clk, reset, q, d);
	input clk, reset, d;
	output reg q;
	
	always@(posedge clk)
	begin
		if(reset)
			q = 0;
		else
			q = d;
	end
endmodule

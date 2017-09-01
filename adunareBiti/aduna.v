`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:25:04 05/05/2017 
// Design Name: 
// Module Name:    aduna 
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
module aduna(x, y, c4, s, c0);
	input [3:0] x;
	input [3:0] y;
	input c0;
	output c4;
	output [3:0] s;
	wire c1, c2, c3;
	wire [3:0] p;
	wire [3:0] g;
	
	always@(*)
	begin 
	$display("%b", p);
	end
	assign g = x & y;
	assign p = x | y;
	assign c1 = g[0] + p[0] * c0;
	assign c2 = g[1] + g[0] * p[1] + p[0] * p[1] * c0;
	assign c3 = g[2] + p[2] * g[1] + g[0] * p[1] * p[2] + p[0] * p[1] * p[2] * c0;
	assign c4 = g[3] + p[3] * g[2] + p[2] * p[3] * g[1] + g[0] * p[1] * p[2] * p[3] + p[0] * p[1] * p[2] * p[3] * c0;
	
	assign s[0] = x[0] + y[0] + c0;
	assign s[1] = x[1] + y[1] + c1;
	assign s[2] = x[2] + y[2] + c2;
	assign s[3] = x[3] + y[3] + c3;
	

endmodule

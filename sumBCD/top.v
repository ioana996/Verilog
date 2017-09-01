`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:47:45 03/31/2017 
// Design Name: 
// Module Name:    top 
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
module top(clk, x, y, carry, out , An, Cout);
	input clk;
	input [3:0] x;
	input [3:0] y;
	output [7:0] Cout;
	output [3:0] An;
	wire clkout;
	//wire [3:0] rest;
	wire [3:0] aux;
	input carry;
	output [3:0] out;
	
	assign aux = 4'b0000;
	
	div div1(clk , clkout);
	sum suma(carry, x, y, out);
	display afis(clkout, out[0], out[1], out[2], out[3], An, Cout);
endmodule

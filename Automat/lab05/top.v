`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:02:26 03/24/2017 
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
module top(clk, b1, b2, b3, eb1, eb2, ebs,Cout, An);
	input b1, b2, b3, clk;
	output eb1, eb2, ebs;
	output [7:0] Cout;
	output [3:0] An;
	wire clkout1 , clkout2;
	wire [3:0] rest;
	wire [3:0] aux;
	
	assign aux = 4'b0000;
	
	Rez divclk1(clk , clkout1);
	clk2 divclk2(clk , clkout2);
	automat aut(b1 , b2 , b3 , eb1 , eb2 , ebs , clkout1, rest);
	afisaj afis(clkout2, aux, aux, aux, rest, An, Cout);

endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:27:46 04/21/2017 
// Design Name: 
// Module Name:    divC 
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
module divC(clkin, clkout);
	reg [24:0] aux = 0;
	input clkin;
	output reg clkout;
	always @ (posedge clkin)
		begin
			aux = aux + 1;
			clkout = aux[12];
		end
endmodule
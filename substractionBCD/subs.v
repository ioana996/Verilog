`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:29:03 04/21/2017 
// Design Name: 
// Module Name:    subs 
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
module subs(x, y, z, sc, out, clk);
	input clk;
	input [3:0] x, y, z;
	input [15:0] sc;
	
	reg [15:0] c1 = 0;
   reg [15:0] c2 = 0;
	reg [15:0] comp = 0;
	reg [15:0] aux = 0;
	output reg [15:0] out = 0;


	always@ (posedge clk)
	begin
				c1[3:0] = z;
				c1[7:4] = y;
				c1[11:8] = x;
				c1[15:12] = 4'b0000;
		
				comp = 999 - sc + 1;
		
				aux = comp % 10;
				comp = comp / 10;
				c2[3:0] = aux;
				
				aux = comp % 10;
				comp = comp / 10;
				c2[7:4] = aux;
				c2[11:8] = comp;
				c2[15:12] = 4'b1001; 
				
				out[15:0] = out[15:0] + c1[3:0] + c2[3:0];
				
				if (out[3:0] > 9)
					begin
						out[15:0] = out[15:0] + 6;
					end
				
				out[15:4] = out[15:4] + c1[7:4] + c2[7:4];
				
				if (out[7:4] > 9)
					begin
						out[15:4] = out[15:4] + 6;
					end
				
				out[15:8] = out[15:8] + c1[11:8] + c2[11:8];
				
				if (out[11:8] > 9)
					begin
						out[15:8] = out[15:8] + 6;
					end
				
				out[15:0] = out [15:12] + c1[15:12] + c2[15:12];		
		end
endmodule

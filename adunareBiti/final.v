`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:59:51 05/05/2017 
// Design Name: 
// Module Name:    final 
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
module final(x, y, c4, s, c0);
   input [15:0] x;
	input [15:0] y;
	input c0;
	output c4;
	output [15:0] s;
	
	aduna a1(x[3:0],y[3:0],c1, s[3:0],c0);
	aduna a2(x[7:4],y[7:4],c2, s[7:4],c1);
	aduna a3(x[11:8],y[11:8],c3, s[11:8],c2);
	aduna a4(x[15:12],y[15:12],c4, s[15:12],c3);

endmodule

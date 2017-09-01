`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:22:47 05/12/2017 
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
module final (x, t, y, z, reset, clk);
	input x, y, t, reset, clk;
	output z;
	wire x1, y1, y2, aux, d, d1, d2;
	bloc b1(x, t, x1);
	registru r1(clk, reset, d, x1);
	bloc b2(d, y, y1);
	registru r2(clk, reset, d1, y1);
	bloc b3(d1, d, d2);
	registru r3(clk, reset, z, d2);
endmodule

/*bloc b1(x, t, x1);
bloc b2(x1, y, y1);
bloc b3(x1, y1, z);*/
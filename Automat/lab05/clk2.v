`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:01:57 03/24/2017 
// Design Name: 
// Module Name:    clk2 
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
module clk2(clkin , clkout);
    reg [23:0] aux = 0;
    input clkin;
    output reg clkout;
    always@(posedge clkin)
    begin
        aux = aux + 1;
        clkout = aux[12];
    end

endmodule
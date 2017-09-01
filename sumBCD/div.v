`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:31:13 03/31/2017 
// Design Name: 
// Module Name:    div 
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
module div(clkin , clkout);
    reg [23:0] aux = 0;
    input clkin;
    output reg clkout;
    always@(posedge clkin)
    begin
        aux = aux + 1;
        clkout = aux[12];
    end

endmodule

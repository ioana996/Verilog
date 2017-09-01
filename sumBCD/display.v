`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:29:05 03/31/2017 
// Design Name: 
// Module Name:    display 
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
module display(clk, C0, C1, C2, C3, An, Cout);
input clk;
input[3:0] C0, C1, C2, C3;
output[7:0] Cout;
reg[7:0] Cout;
output[3:0] An;
reg[3:0] An;
 
reg[3:0] C;
reg[1:0] S;
 
initial
begin
    S = 2'b00;
end
 
always @(posedge clk)
begin
    case (S)
        2'b00: {C, An} = {C0,4'b0111};
        2'b01: {C, An} = {C1,4'b1011};
        2'b10: {C, An} = {C2,4'b1101};
        2'b11: {C, An} = {C3,4'b1110};
    endcase
    S = S + 1;
    case (C)
        4'b0000 : Cout = 8'b00000011;
        4'b0001 : Cout = 8'b10011111;
        4'b0010 : Cout = 8'b00100101;
        4'b0011 : Cout = 8'b00001101;
        4'b0100 : Cout = 8'b10011001;
        4'b0101 : Cout = 8'b01001000;
        4'b0110 : Cout = 8'b01000001;
        4'b0111 : Cout = 8'b00011011;
        4'b1000 : Cout = 8'b00000001;
        4'b1001 : Cout = 8'b00001001;
        default: Cout = 8'b11111111;
    endcase
end
 
endmodule


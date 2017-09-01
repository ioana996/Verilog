
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:00:56 03/24/2017 
// Design Name: 
// Module Name:    auto 
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
module automat(b1 , b2 , b3 , eb1 , eb2 , ebs , clk, rest);

	output reg [3:0] rest = 4'b0000;
	input b1 ,b2 ,b3, clk;
	output reg eb1 = 0 ,eb2 =0,ebs=0;
	reg [2:0] state = 3'b000;
	
	always@(posedge clk)
		begin
		rest = 4'b000; eb1 = 0; eb2 = 0; ebs = 0;
			case(state)
			3'b000: begin
			
						if(b1 == 0 && b2 == 0 && b3 ==0)
							begin
								state = 3'b000;
							end
						if(b1 == 1 && b2 == 0 && b3 == 0)
							begin 
								state = 3'b001;
								//eb1 = 0;
								//eb2 = 0;
								ebs = 0;
							end
						 if(b1 == 0 && b2 == 0 && b3 == 1)
							begin
								state = 3'b101;
								//eb1 = 0;
								eb2 = 1;
								ebs = 1;
								rest = rest + 5;
							end
						 if(b1 == 0 && b2 == 1 && b3 ==0)
							begin
								state = 3'b110;
								eb1 = 1;
								//eb2 = 0;
								ebs = 1;
								rest = rest + 1;
							end
						 
							end
				3'b001:begin
						if(b1 == 1 && b2 == 0 && b3 == 0)
							begin 
								state = 3'b010;
								//eb1 = 0;
								//eb2 = 0;
								//ebs = 0;
							end
						 if(b1 == 0 && b2 == 0 && b3 ==1)
							begin
								state = 3'b100;
								//eb1 = 0;
								eb2 = 1;
								ebs = 1;
								rest = rest + 5;
							end
						 if(b1 == 0 && b2 == 1 && b3 ==0)
							begin
								state = 3'b101;
								eb1 = 1;
								eb2 = 0;
								ebs = 1;
								rest = rest + 1;
							end
							end
				3'b010:begin
						if(b1 == 0 && b2 == 1 && b3 == 0)
							begin 
								state = 3'b100;
								eb1 = 1;
								//eb2 = 1;
								ebs = 1;
								rest = rest + 1;
							end
						 if(b1 == 0 && b2 == 0 && b3 ==1)
							begin
								state = 3'b011;
								//eb1 = 1;
								eb2 = 1;
								ebs = 1;
								rest = rest + 1;
							end
						 if(b1 == 0 && b2 == 0 && b3 ==0)
							begin
								state = 3'b010;
								//eb1 = 0;
								//eb2 = 0;
								//ebs = 0;
							end
						 if(b1 == 1 && b2 == 0 && b3 ==0)
							begin
								state = 3'b000;
							//	eb1 = 0;
							//	eb2 = 0;
								ebs = 1;
							end
							end 
				3'b011:begin 
								state = 3'b100;
								eb1 = 1;
								//eb2 = 0;
								//ebs = 0;
								rest = rest + 1;
						 end
				3'b101:begin 
								state = 3'b110;
								eb1 = 1;
								//eb2 = 0;
								//ebs = 0;
								rest = rest + 1;
						 end
			  3'b110:begin 
								state = 3'b000;
								eb1 = 1;
								//eb2 = 0;
								//ebs = 0;
								rest = rest + 1;
						 end
				3'b100:begin 
								state = 3'b101;
								eb1 = 1;
								//eb2 = 0;
								//ebs = 0;
								rest = rest + 1;
						 end
			endcase
			end
endmodule

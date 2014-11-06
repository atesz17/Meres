`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:57:54 11/06/2014 
// Design Name: 
// Module Name:    cntr 
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
module cntr(input clk, rst, START, par_en, en_usrt, RTS, output max, output [5:0] cout);

reg LASTBIT;
reg ST;
reg[5:0] counter;

always @ (posedge clk)
	begin
			ST <= START;
			LASTBIT = (counter == 6'd39);
			
			if (rst | LASTBIT &  en_usrt)
					counter <= 6'd0;
			else
				begin
					if (en_usrt & RTS)
						begin
							if (ST | (counter!=6'd0))
								begin
									if (!par_en)
										begin
											if (counter%10 == 7)
												counter <= counter+2;
											else
												counter <= counter+1;
										end
									else
										counter <= counter+1;
								end
						end
				end
	end
	
	assign cout = counter;
	assign max = LASTBIT;


endmodule

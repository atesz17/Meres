`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:11:51 11/06/2014 
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
module top( input clk, usrt_clk, rst, start, sw6, output RTS, TXD);

reg en_usrt;
reg[1:0] Q_usrt;
reg _RTS;
wire _max;
wire[5:0] sel;
wire _TXD;

always @ (posedge clk)
	begin
		
		en_usrt <= (Q_usrt == 1'd1);
		
		if (rst)
			Q_usrt <= 2'd0;
		else
			begin
				Q_usrt[1] = Q_usrt[0];
				Q_usrt[0] = usrt_clk;
			end
			
		if (start)
			_RTS <= 1;
			
		if (_max)
			_RTS <= 0;
	end
	
	
cntr MCounter(clk, rst, start, sw6, en_usrt, _RTS, _max, sel);

mpx MMultiplexer(sel, _TXD);

assign RTS = _RTS;
assign TXD = _TXD;

endmodule

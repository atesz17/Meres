`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:46:31 11/06/2014 
// Design Name: 
// Module Name:    mpx 
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
module mpx(input [5:0] sel, output reg txd );

always @ (sel)
	begin
		case (sel)
			6'd0 : txd = 0; // a START
			6'd1 : txd = 1;
			6'd2 : txd = 0;
			6'd3 : txd = 0;
			6'd4 : txd = 0;
			6'd5 : txd = 0; 
			6'd6 : txd = 1;
			6'd7 : txd = 1;
			6'd8 : txd = 0;
			6'd9 : txd = 1; // a STOP
			
			6'd10 : txd = 0; // b START
			6'd11 : txd = 0;
			6'd12 : txd = 1;
			6'd13 : txd = 0;
			6'd14 : txd = 0;
			6'd15 : txd = 0;
			6'd16 : txd = 1;
			6'd17 : txd = 1;
			6'd18 : txd = 0;
			6'd19 : txd = 1; // b STOP

			6'd20 : txd = 0; // c START
			6'd21 : txd = 1;
			6'd22 : txd = 1;
			6'd23 : txd = 0;
			6'd24 : txd = 0;
			6'd25 : txd = 0;
			6'd26 : txd = 1;
			6'd27 : txd = 1;
			6'd28 : txd = 1;
			6'd29 : txd = 1; // c STOP
			
			6'd30 : txd = 0; // d START
			6'd31 : txd = 0;
			6'd32 : txd = 0;
			6'd33 : txd = 1;
			6'd34 : txd = 0;
			6'd35 : txd = 0;
			6'd36 : txd = 1;
			6'd37 : txd = 1;
			6'd38 : txd = 0;
			6'd39 : txd = 1; // d STOP
			
			default: txd = 1;
		endcase
	end


endmodule

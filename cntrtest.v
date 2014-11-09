`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:12:51 11/06/2014
// Design Name:   cntr
// Module Name:   D:/Xilinx/Projects/hazi_uj/cntrtest.v
// Project Name:  hazi_uj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cntr
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cntrtest;

	// Inputs
	reg clk;
	reg rst;
	reg START;
	reg par_en;
	reg en_usrt;
	reg RTS;

	// Outputs
	wire max;
	wire [5:0] cout;

	// Instantiate the Unit Under Test (UUT)
	cntr uut (
		.clk(clk), 
		.rst(rst), 
		.START(START), 
		.par_en(par_en), 
		.en_usrt(en_usrt), 
		.RTS(RTS), 
		.max(max), 
		.cout(cout)
	);
	
	always #5 clk<=~clk;
	always #10 en_usrt <= ~en_usrt; 

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		START = 0;
		par_en = 0;
		en_usrt = 0;
		RTS = 1;

		// Wait 100 ns for global reset to finish
		#100;
		  
		#10 rst=1;
		#10 rst=0;
		#10 START=1;
		#20 START=0; 
        
		 
		// Add stimulus here

	end
      
endmodule


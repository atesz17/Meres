`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:35:21 11/06/2014
// Design Name:   top
// Module Name:   D:/Xilinx/Projects/hazi_uj/test.v
// Project Name:  hazi_uj
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg usrt_clk;
	reg rst;
	reg start;
	reg sw6;

	// Outputs
	wire RTS;
	wire TXD;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.usrt_clk(usrt_clk), 
		.rst(rst), 
		.start(start), 
		.sw6(sw6), 
		.RTS(RTS), 
		.TXD(TXD)
	);
	
	always #5 clk<=~clk;
	always #10 usrt_clk <= ~usrt_clk; 

	initial begin
		// Initialize Inputs
		clk = 0;
		usrt_clk = 0;
		rst = 0;
		start = 0;
		sw6 = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		#10 rst=1;
		#10 rst=0;
		#10 start=1;
		#10000 start=0; 
		// Add stimulus here

	end
      
endmodule


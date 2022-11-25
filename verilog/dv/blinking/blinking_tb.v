// SPDX-FileCopyrightText: 2020 Efabless Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// SPDX-License-Identifier: Apache-2.0

`default_nettype none

`timescale 1 ns / 1 ps
`include "../SIM_DEFS.v"

module blinking_tb;
	reg clock;
	reg RSTB;
	reg CSB;
	reg power1, power2;
	reg power3, power4;

	wire gpio;
	wire [37:0] mprj_io;
	reg [3:0] ticks = 0;
	wire [7:0] led;

	assign led  = mprj_io[9:2];

	always #50 clock <= (clock === 1'b0);

	initial begin
		clock = 0;
	end

	integer a;
	initial begin
		$dumpfile("blinking.vcd");
		$dumpvars(0, blinking_tb);
		if(`DUMP_STRG) begin
      // Dump contents of BootMemory (writeable)
			for(a = 0; a < 16; a = a + 1) begin
				$dumpvars(0, uut.mprj.patmos.patmos.patmos.cores_0.fetch.bootMem.memWithWrEven.mem[a]);
				$dumpvars(0, uut.mprj.patmos.patmos.patmos.cores_0.fetch.bootMem.memWithWrOdd.mem[a]);
			end
			// Dump register file
		  for(a = 0; a < 32; a = a + 1) begin
        $dumpvars(0, uut.mprj.patmos.patmos.patmos.cores_0.decode.rf.rf[a]);
      end
		end

		// Repeat cycles of 1000 clock edges as needed to complete testbench
		repeat (75) begin
			repeat (1000) @(posedge clock);
			// $display("+1000 cycles");
		end
		$display("%c[1;31m",27);
		`ifdef GL
			$display ("Monitor: Timeout, Test 'blinking' (GL) Failed");
		`else
			$display ("Monitor: Timeout, Test 'blinking' (RTL) Failed");
		`endif
		$display("%c[0m",27);
		$finish;
	end

	initial begin
		wait(ticks == 8); // count 8 blinks and we are done
		$display("%c[1;32m",27);
		`ifdef GL
	    	$display("Monitor: Test 'blinking' (GL) Passed");
		`else
		    $display("Monitor: Test 'blinking' (RTL) Passed");
		`endif
		$display("%c[0m",27);
	  $finish;

	end
	initial begin
    $display("\nPatmos 'blinking' test");
	end
	always @(led) begin
		if(led[0] == 1) begin
			$write("%c[34m",27);
			$display("\\|/\n *");
			$write("%c[0m",27);
			ticks <= ticks + 1; // Count each time the led is on
		end
		else
			$display(" o");
	end

	initial begin
		RSTB <= 1'b0;
		CSB  <= 1'b1;		// Force CSB high
		#2000;
		RSTB <= 1'b1;	    	// Release reset
		#100000;
		CSB = 1'b0;		// CSB can be released
	end

	initial begin		// Power-up sequence
		power1 <= 1'b0;
		power2 <= 1'b0;
		power3 <= 1'b0;
		power4 <= 1'b0;
		#200;
		power1 <= 1'b1;
		#200;
		power2 <= 1'b1;
		#200;
		power3 <= 1'b1;
		#200;
		power4 <= 1'b1;
	end

	wire flash_csb;
	wire flash_clk;
	wire flash_io0;
	wire flash_io1;

	wire VDD3V3 = power1;
	wire VDD1V8 = power2;
	wire USER_VDD3V3 = power3;
	wire USER_VDD1V8 = power4;
	wire VSS = 1'b0;

	caravel uut (
		.vddio	  (VDD3V3),
		.vddio_2  (VDD3V3),
		.vssio	  (VSS),
		.vssio_2  (VSS),
		.vdda	  (VDD3V3),
		.vssa	  (VSS),
		.vccd	  (VDD1V8),
		.vssd	  (VSS),
		.vdda1    (VDD3V3),
		.vdda1_2  (VDD3V3),
		.vdda2    (VDD3V3),
		.vssa1	  (VSS),
		.vssa1_2  (VSS),
		.vssa2	  (VSS),
		.vccd1	  (VDD1V8),
		.vccd2	  (VDD1V8),
		.vssd1	  (VSS),
		.vssd2	  (VSS),
		.clock    (clock),
		.gpio     (gpio),
		.mprj_io  (mprj_io),
		.flash_csb(flash_csb),
		.flash_clk(flash_clk),
		.flash_io0(flash_io0),
		.flash_io1(flash_io1),
		.resetb	  (RSTB)
	);

	spiflash #(
		.FILENAME("blinking.hex")
	) spiflash (
		.csb(flash_csb),
		.clk(flash_clk),
		.io0(flash_io0),
		.io1(flash_io1),
		.io2(),			// not used
		.io3()			// not used
	);

endmodule
`default_nettype wire
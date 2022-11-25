#include <defs.h>
#include <stub.c>
#include "../wb-defs.h" // User defined wb addresses.
void main()
{
        
    reg_wb_enable = 1;
    // Configure patmos output pins
    reg_mprj_io_0 =  GPIO_MODE_USER_STD_INPUT_NOPULL;
    reg_mprj_io_1 =  GPIO_MODE_USER_STD_OUTPUT;
    reg_mprj_io_37 =  GPIO_MODE_MGMT_STD_OUTPUT;
    reg_mprj_xfer = 1;
    while (reg_mprj_xfer == 1); // Wait for configuration to become active
    // start program
    reg_wb_rom_dataEven = 0xa0;
    reg_wb_rom_addrEven = 0x0;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x2020000;
    reg_wb_rom_addrOdd = 0x0;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x60000;
    reg_wb_rom_addrEven = 0x1;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x80018;
    reg_wb_rom_addrOdd = 0x1;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x87ce0000;
    reg_wb_rom_addrEven = 0x2;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0xf0080000;
    reg_wb_rom_addrOdd = 0x2;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x87d00000;
    reg_wb_rom_addrEven = 0x3;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0xf0080004;
    reg_wb_rom_addrOdd = 0x3;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x2120000;
    reg_wb_rom_addrEven = 0x4;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x2827080;
    reg_wb_rom_addrOdd = 0x4;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x400000;
    reg_wb_rom_addrEven = 0x5;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x400000;
    reg_wb_rom_addrOdd = 0x5;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x1c21002;
    reg_wb_rom_addrEven = 0x6;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x2021030;
    reg_wb_rom_addrOdd = 0x6;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0xcfffffb;
    reg_wb_rom_addrEven = 0x7;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x400000;
    reg_wb_rom_addrOdd = 0x7;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x400000;
    reg_wb_rom_addrEven = 0x8;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x2848080;
    reg_wb_rom_addrOdd = 0x8;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x400000;
    reg_wb_rom_addrEven = 0x9;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x400000;
    reg_wb_rom_addrOdd = 0x9;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x2042183;
    reg_wb_rom_addrEven = 0xa;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x2122486;
    reg_wb_rom_addrOdd = 0xa;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x63008;
    reg_wb_rom_addrEven = 0xb;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x2023231;
    reg_wb_rom_addrOdd = 0xb;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0xcfffff1;
    reg_wb_rom_addrEven = 0xc;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x400000;
    reg_wb_rom_addrOdd = 0xc;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x400000;
    reg_wb_rom_addrEven = 0xd;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x60003;
    reg_wb_rom_addrOdd = 0xd;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x2827080;
    reg_wb_rom_addrEven = 0xe;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x400000;
    reg_wb_rom_addrOdd = 0xe;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x400000;
    reg_wb_rom_addrEven = 0xf;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x1c21001;
    reg_wb_rom_addrOdd = 0xf;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x2021030;
    reg_wb_rom_addrEven = 0x10;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0xcfffffb;
    reg_wb_rom_addrOdd = 0x10;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x1c490ff;
    reg_wb_rom_addrEven = 0x11;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x1129008;
    reg_wb_rom_addrOdd = 0x11;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x463001;
    reg_wb_rom_addrEven = 0x12;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x2c28100;
    reg_wb_rom_addrOdd = 0x12;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x2023031;
    reg_wb_rom_addrEven = 0x13;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x4fffff5;
    reg_wb_rom_addrOdd = 0x13;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x0;
    reg_wb_rom_addrEven = 0x14;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x0;
    reg_wb_rom_addrOdd = 0x14;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x0;
    reg_wb_rom_addrEven = 0x15;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x0;
    reg_wb_rom_addrOdd = 0x15;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x0;
    reg_wb_rom_addrEven = 0x16;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    // end program
    reg_wb_bootAddr = 4097;
    reg_wb_reset = 0x0; // Set patmos reset low
    reg_mprj_datah = 1 << 5; // Tell testbench that Patmos is programmed and running
}
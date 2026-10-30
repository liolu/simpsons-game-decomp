/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_021968b0[];
extern u8 func_ov000_021782c4[];
extern u8 func_ov000_02178c70[];
extern u8 func_ov000_02178cc4[];
extern u8 func_ov000_02178dac[];

u32 data_ov000_02196a14[4]  = {(u32) &func_ov000_021782c4, (u32) &func_ov000_02178dac, (u32) &func_ov000_02178c70,
                               (u32) &func_ov000_02178cc4};
u32 data_ov000_02196a24[21] = {
    0x75463431, 0x624F636E, 0x6C61436A, 0x3072656C, 0x33314E49, 0x6F746341, 0x746E4972,
    0x616E7265, 0x4132326C, 0x74706164, 0x75736552, 0x6F54746C, 0x65736142, 0x6F746341,
    0x4E334972, 0x37497765, 0x49626F4D, 0x456E6F63, 0x00454545, 0x00000000, (u32) &data_ov000_021968b0};

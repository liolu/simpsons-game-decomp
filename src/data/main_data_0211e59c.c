/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02119a9c[];
extern u8 data_0211ced4[];
extern u8 data_02137920[];

#pragma explicit_zero_data on
u32 data_0211e59c[1]  = {0};
u32 data_0211e5a0[11] = {0x0000001B,           0x00000000,           0xFFFFFFFF,          0x00000000,
                         0x00000000,           0x00000000,           0x00000000,          (u32) &data_02137920,
                         (u32) &data_0211ced4, (u32) &data_02137920, (u32) &data_02119a9c};

/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0210bf04[];
extern u8 data_0210bf44[];
extern u8 data_02137920[];
extern u8 func_020554f8[];

#pragma explicit_zero_data on
u32 data_0211db14[4] = {0};
u32 data_0211db24[6] = {(u32) &data_02137920, (u32) &data_0210bf04, (u32) &func_020554f8,
                        0x00000000,           (u32) &data_02137920, (u32) &data_0210bf44};

/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0210b354[];
extern u8 data_0210b4f8[];
extern u8 data_02137920[];

#pragma explicit_zero_data on
u32 data_0212fe8c[2] = {0};
u32 data_0212fe94[6] = {0x00000000,           0x00000000,           (u32) &data_02137920,
                        (u32) &data_0210b354, (u32) &data_02137920, (u32) &data_0210b4f8};

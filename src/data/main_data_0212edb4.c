/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0210af80[];
extern u8 data_0210b07c[];
extern u8 data_02137900[];

#pragma explicit_zero_data on
u32 data_0212edb4[4]  = {0};
u32 data_0212edc4[10] = {0x00000000,           0x00000000, 0x00000000, 0x00000000,           (u32) &data_02137900,
                         (u32) &data_0210b07c, 0x00000000, 0x00000001, (u32) &data_0210af80, 0x00000000};

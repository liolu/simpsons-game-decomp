/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0210af80[];
extern u8 data_0210af88[];
extern u8 data_0210af9c[];
extern u8 data_0210afbc[];
extern u8 data_0210afc8[];
extern u8 data_0210afe4[];
extern u8 data_0212fe34[];
extern u8 data_02137900[];
extern u8 data_02137920[];

u32 data_0212fdc8[6]  = {(u32) &data_02137920, (u32) &data_0210afe4, (u32) &data_02137920,
                         (u32) &data_0210afc8, 0x00000000,           0x00000000};
u32 data_0212fde0[18] = {(u32) &data_02137900, (u32) &data_0212fe34, 0x00000000,           0x00000002,
                         (u32) &data_0210af9c, 0x00000002,           (u32) &data_0210af88, 0x00001002,
                         (u32) &data_02137900, (u32) &data_0210afbc, 0x00000000,           0x00000002,
                         (u32) &data_0210af80, 0x00000000,           (u32) &data_0210af88, 0x00000402,
                         0x00000000,           (u32) &data_0212fde0};

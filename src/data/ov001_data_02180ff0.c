/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0210af80[];
extern u8 data_0210af88[];
extern u8 data_0210afbc[];
extern u8 data_02137900[];
extern u8 data_ov001_02180f70[];

#pragma explicit_zero_data on
u32 data_ov001_02180ff0[4]  = {0};
u32 data_ov001_02181000[14] = {0x00000000,           0x00000000,
                               0x00000000,           0x00000000,
                               (u32) &data_02137900, (u32) &data_0210afbc,
                               0x00000000,           0x00000002,
                               (u32) &data_0210af80, 0x00000000,
                               (u32) &data_0210af88, 0x00000402,
                               0x00000000,           (u32) &data_ov001_02180f70};

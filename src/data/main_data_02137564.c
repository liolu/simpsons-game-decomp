/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02137504[];
extern u8 data_021375dc[];
extern u8 data_02137604[];
extern u8 data_02137900[];

u32 data_02137564[6] = {(u32) &data_02137900, (u32) &data_021375dc, 0x00000000, 0x00000001, (u32) &data_02137504, 0xFFFFF403};
u32 data_0213757c[8] = {(u32) &data_02137900, (u32) &data_02137604, 0x00000000, 0x00000001,
                        (u32) &data_02137504, 0xFFFFF403,           0x00000000, (u32) &data_02137504};

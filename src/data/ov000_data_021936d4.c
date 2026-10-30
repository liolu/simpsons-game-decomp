/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02193668[];
extern u8 func_ov000_0216aba8[];
extern u8 func_ov000_0216b720[];
extern u8 func_ov000_0216b774[];
extern u8 func_ov000_0216bb1c[];

u32 data_ov000_021936d4[4] = {(u32) &func_ov000_0216aba8, (u32) &func_ov000_0216bb1c, (u32) &func_ov000_0216b720,
                              (u32) &func_ov000_0216b774};
u32 data_ov000_021936e4[9] = {0x6F6D654D, 0x61207972, 0x636F6C6C,
                              0x6F697461, 0x6166206E, 0x72756C69,
                              0x00000065, 0x00000000, (u32) &data_ov000_02193668};

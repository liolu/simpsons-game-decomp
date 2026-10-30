/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_02195bec[];
extern u8 data_ov000_02195bf8[];
extern u8 func_ov000_02173bc8[];
extern u8 func_ov000_02174710[];
extern u8 func_ov000_02174764[];
extern u8 func_ov000_02174954[];

u32 data_ov000_02195d90[5] = {0x72614C37, 0x64614C64, 0x00000000, 0x00000000, (u32) &data_ov000_02195bec};
u32 data_ov000_02195da4[6] = {
    (u32) &func_ov000_02173bc8, (u32) &func_ov000_02174954, (u32) &func_ov000_02174710, (u32) &func_ov000_02174764, 0x00000000,
    (u32) &data_ov000_02195bf8};

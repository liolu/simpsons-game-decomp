/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov001_02180614[];
extern u8 data_ov001_02180620[];
extern u8 func_ov001_0215aca0[];
extern u8 func_ov001_0215acc0[];
extern u8 func_ov001_0215ace8[];
extern u8 func_ov001_0215b420[];
extern u8 func_ov001_0215b4e8[];
extern u8 func_ov001_0215b798[];
extern u8 func_ov001_0215b7e4[];

u32 data_ov001_021806ac[5] = {(u32) &func_ov001_0215aca0, (u32) &func_ov001_0215acc0, (u32) &func_ov001_0215ace8, 0x00000000,
                              (u32) &data_ov001_02180620};
u32 data_ov001_021806c0[6] = {
    (u32) &func_ov001_0215b7e4, (u32) &func_ov001_0215b798, (u32) &func_ov001_0215b420, (u32) &func_ov001_0215b4e8, 0x00000000,
    (u32) &data_ov001_02180614};

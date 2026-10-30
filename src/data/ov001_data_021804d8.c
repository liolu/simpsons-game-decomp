/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov001_02180298[];
extern u8 data_ov001_021802a4[];
extern u8 func_ov001_021590f0[];
extern u8 func_ov001_0215918c[];
extern u8 func_ov001_0215939c[];
extern u8 func_ov001_0215a880[];
extern u8 func_ov001_0215a944[];
extern u8 func_ov001_0215a9f8[];
extern u8 func_ov001_0215aa44[];

u32 data_ov001_021804d8[5] = {(u32) &func_ov001_021590f0, (u32) &func_ov001_0215918c, (u32) &func_ov001_0215939c, 0x00000000,
                              (u32) &data_ov001_02180298};
u32 data_ov001_021804ec[6] = {
    (u32) &func_ov001_0215aa44, (u32) &func_ov001_0215a9f8, (u32) &func_ov001_0215a880, (u32) &func_ov001_0215a944, 0x00000000,
    (u32) &data_ov001_021802a4};

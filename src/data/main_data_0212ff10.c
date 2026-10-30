/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0210af80[];
extern u8 data_0210af88[];
extern u8 data_0210af9c[];
extern u8 data_0210afbc[];
extern u8 data_0210afc8[];
extern u8 data_0210afe4[];
extern u8 data_0210b170[];
extern u8 data_0210b1ac[];
extern u8 data_021226b8[];
extern u8 data_021226d0[];
extern u8 data_0212bfb0[];
extern u8 data_0212c9c0[];
extern u8 data_0212fff4[];
extern u8 data_02130014[];
extern u8 data_02137900[];
extern u8 data_02137910[];
extern u8 data_02137920[];

u32 data_0212ff10[3]  = {0xFFFFFFFF, 0x00000001, 0x00000005};
u32 data_0212ff1c[8]  = {0x00000000, 0x00000000, (u32) &data_02137920, (u32) &data_0210afe4,
                         0x00000000, 0x00000000, (u32) &data_02137920, (u32) &data_0210afc8};
u32 data_0212ff3c[9]  = {(u32) &data_02137910, (u32) &data_0212fff4, (u32) &data_0210b170,
                         (u32) &data_02137910, (u32) &data_0212bfb0, (u32) &data_021226b8,
                         (u32) &data_02137910, (u32) &data_0212c9c0, (u32) &data_021226b8};
u32 data_0212ff60[27] = {(u32) &data_02137910, (u32) &data_02130014, (u32) &data_021226b8, (u32) &data_02137900,
                         (u32) &data_021226d0, 0x00000000,           0x00000001,           (u32) &data_0210af80,
                         0x00000000,           (u32) &data_02137900, (u32) &data_0210afbc, 0x00000000,
                         0x00000002,           (u32) &data_0210af80, 0x00000000,           (u32) &data_0210af88,
                         0x00000402,           (u32) &data_02137900, (u32) &data_0210b1ac, 0x00000000,
                         0x00000002,           (u32) &data_0210af80, 0x00001000,           (u32) &data_0210af9c,
                         0x00000002,           0x00000000,           (u32) &data_0212ff3c};

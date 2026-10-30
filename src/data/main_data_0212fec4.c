/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0210b2b0[];
extern u8 data_0210b370[];
extern u8 data_0210b450[];
extern u8 data_0210bd34[];
extern u8 data_0210bd44[];
extern u8 data_0210bd4c[];
extern u8 data_0210bd54[];
extern u8 data_0210bd80[];
extern u8 data_02137910[];
extern u8 data_02137920[];
extern u8 func_020b60f4[];
extern u8 func_020b6180[];
extern u8 func_020b619c[];

u32 data_0212fec4[2]  = {(u32) &func_020b60f4, 0x00000000};
u32 data_0212fecc[6]  = {(u32) &func_020b6180, 0x00000000,           (u32) &data_02137920,
                         (u32) &data_0210bd34, (u32) &data_02137920, (u32) &data_0210b450};
u32 data_0212fee4[11] = {(u32) &func_020b619c, 0x00000000,           (u32) &data_02137910, (u32) &data_0210bd44,
                         (u32) &data_0210bd54, (u32) &data_02137910, (u32) &data_0210b370, (u32) &data_0210b2b0,
                         (u32) &data_02137910, (u32) &data_0210bd80, (u32) &data_0210bd4c};

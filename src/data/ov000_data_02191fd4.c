/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02122568[];
extern u8 func_02079a68[];
extern u8 func_02079a70[];
extern u8 func_ov000_02160b48[];
extern u8 func_ov000_02160b94[];
extern u8 func_ov000_02160c34[];
extern u8 func_ov000_02160f88[];
extern u8 func_ov000_02160fa8[];

u32 data_ov000_02191fd4[6] = {0x61626F4D, 0x43656C62, 0x72746E6F, 0x00006C6F, 0x00000000, (u32) &data_02122568};
u32 data_ov000_02191fec[7] = {(u32) &func_ov000_02160b48, (u32) &func_ov000_02160b94, (u32) &func_02079a68,
                              (u32) &func_ov000_02160c34, (u32) &func_02079a70,       (u32) &func_ov000_02160f88,
                              (u32) &func_ov000_02160fa8};

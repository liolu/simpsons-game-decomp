/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02125614[];
extern u8 data_021256a8[];
extern u8 data_02125710[];
extern u8 data_02125778[];
extern u8 data_021257e0[];
extern u8 data_02125848[];
extern u8 data_021258b0[];
extern u8 data_02125918[];
extern u8 data_02125980[];
extern u8 data_021259e8[];
extern u8 data_02125a50[];
extern u8 data_02125ab8[];
extern u8 data_02125b20[];
extern u8 data_02125b88[];
extern u8 data_02125bf0[];
extern u8 data_02125c58[];
extern u8 data_02125cc0[];
extern u8 data_02125d28[];
extern u8 data_02125d90[];
extern u8 data_02125df8[];
extern u8 data_02125e60[];
extern u8 data_02125ec8[];
extern u8 data_02125f30[];
extern u8 data_02125f98[];
extern u8 data_02126000[];
extern u8 data_02126068[];
extern u8 data_021260d0[];
extern u8 data_02126138[];
extern u8 data_021261a0[];
extern u8 data_02126208[];
extern u8 data_02126270[];
extern u8 data_021262d8[];
extern u8 data_02126340[];
extern u8 data_021263a8[];
extern u8 data_02126410[];
extern u8 data_02126478[];
extern u8 data_021264e0[];
extern u8 data_02126548[];
extern u8 data_021265b0[];
extern u8 data_02126618[];
extern u8 data_021266e8[];
extern u8 data_02126750[];
extern u8 data_021267b8[];
extern u8 data_02126820[];
extern u8 data_02126888[];
extern u8 data_021268f0[];
extern u8 data_02126958[];
extern u8 data_021269c0[];
extern u8 data_02126a28[];
extern u8 data_02126a90[];
extern u8 data_02126af8[];
extern u8 data_02126b60[];
extern u8 func_02082ed8[];

u32 data_02126bc8[26] = {0x00000D2B, 0x00000D2C, 0x00000D2D, 0x00000000, 0x00000D40, 0x00000D2E, 0x00000D2F,
                         0x00000D30, 0x00000000, 0x00000D40, 0x00000D31, 0x00000D32, 0x00000D33, 0x00000000,
                         0x00000D40, 0x00000D34, 0x00000D35, 0x00000D36, 0x00000000, 0x00000D40, 0x00000D37,
                         0x00000D38, 0x00000D39, 0x00000000, 0x00000D40, 0x00000000};
u32 data_02126c30[36] = {
    0x000001B0, 0x00000001, 0x000001DC, 0x00000001, 0x000001B4, 0x00000001, 0x000001B8, 0x00000001, (u32) &func_02082ed8,
    0x00000000, 0x000001BC, 0x00000001, 0x000001C0, 0x00000001, 0x000001C4, 0x00000001, 0x000001C8, 0x00000001,
    0x000001CC, 0x00000001, 0x000001E0, 0x00000001, 0x000001E4, 0x00000001, 0x000001D0, 0x00000001, 0x000001D8,
    0x00000001, 0x000001A8, 0x00000001, 0x000001AC, 0x00000001, 0x000001D4, 0x00000001, 0x00000000, 0x00000000};
u32 data_02126cc0[47] = {(u32) &data_02125848,
                         (u32) &data_02126068,
                         (u32) &data_02125980,
                         (u32) &data_021259e8,
                         (u32) &data_02125a50,
                         (u32) &data_02125ab8,
                         (u32) &data_02125b20,
                         (u32) &data_02125b88,
                         (u32) &data_02125c58,
                         (u32) &data_02125cc0,
                         (u32) &data_02125d28,
                         (u32) &data_02125d90,
                         (u32) &data_02125df8,
                         (u32) &data_02125ec8,
                         (u32) &data_02125f30,
                         0x00000000,
                         (u32) &data_021260d0,
                         (u32) &data_02126138,
                         (u32) &data_02126208,
                         (u32) &data_02126270,
                         (u32) &data_02126410,
                         (u32) &data_02126478,
                         (u32) &data_021265b0,
                         0x00000000,
                         0x00000000,
                         (u32) &data_02125bf0,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         0x00000000,
                         (u32) &data_021267b8,
                         (u32) &data_021267b8,
                         (u32) &data_02126af8,
                         (u32) &data_021257e0,
                         0x00000000};
u32 data_02126d7c[49] = {
    (u32) &data_021258b0, (u32) &data_02125918, (u32) &data_02125e60, (u32) &data_02126bc8, (u32) &data_02126b60,
    (u32) &data_02125f98, (u32) &data_02126000, (u32) &data_02126a28, (u32) &data_02126958, (u32) &data_021261a0,
    (u32) &data_02126888, (u32) &data_02126820, (u32) &data_021262d8, (u32) &data_02126340, (u32) &data_021266e8,
    (u32) &data_021256a8, (u32) &data_021264e0, (u32) &data_02126548, (u32) &data_02126618, (u32) &data_02126750,
    (u32) &data_021268f0, (u32) &data_02126a90, (u32) &data_021263a8, 0x00000000,           0x00000000,
    (u32) &data_021269c0, 0x00000000,           0x00000000,           0x00000000,           0x00000000,
    0x00000000,           0x00000000,           0x00000000,           0x00000000,           0x00000000,
    0x00000000,           0x00000000,           0x00000000,           0x00000000,           0x00000000,
    0x00000000,           0x00000000,           (u32) &data_02125710, (u32) &data_02125710, (u32) &data_02125778,
    (u32) &data_021257e0, 0x00000000,           0x00000000,           (u32) &data_02125614};

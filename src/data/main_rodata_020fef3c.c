/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_02048a40[];
extern u8 func_02048a48[];
extern u8 func_02048c74[];
extern u8 func_02048c7c[];
extern u8 func_02048cc4[];
extern u8 func_02048d0c[];
extern u8 func_02048d54[];
extern u8 func_02048d9c[];
extern u8 func_02048e14[];
extern u8 func_02048ea4[];
extern u8 func_02048ed4[];
extern u8 func_02048eec[];
extern u8 func_02048f58[];
extern u8 func_02048fe0[];
extern u8 func_02049020[];
extern u8 func_02049044[];
extern u8 func_02049068[];
extern u8 func_020491bc[];
extern u8 func_020493f0[];
extern u8 func_02049458[];
extern u8 func_02049660[];
extern u8 func_020496f0[];
extern u8 func_0204972c[];
extern u8 func_02049760[];
extern u8 func_020497d4[];
extern u8 func_0204984c[];
extern u8 func_0204986c[];
extern u8 func_020498b0[];
extern u8 func_020498ec[];
extern u8 func_02049930[];
extern u8 func_02049940[];
extern u8 func_02049a2c[];
extern u8 func_02049b30[];
extern u8 func_02049b90[];
extern u8 func_02049ba4[];
extern u8 func_02049bb8[];
extern u8 func_02049d20[];
extern u8 func_02049e80[];
extern u8 func_02049e9c[];
extern u8 func_02049edc[];
extern u8 func_02049f3c[];
extern u8 func_02049f9c[];
extern u8 func_02049fdc[];
extern u8 func_0204a01c[];
extern u8 func_0204a05c[];
extern u8 func_0204a0a4[];
extern u8 func_0204a114[];
extern u8 func_0204a134[];
extern u8 func_0204a1e4[];
extern u8 func_0204a250[];
extern u8 func_0204a29c[];
extern u8 func_0204a328[];
extern u8 func_0204a378[];
extern u8 func_0204a454[];
extern u8 func_0204a4a4[];
extern u8 func_0204a4e8[];
extern u8 func_0204a4fc[];
extern u8 func_0204a564[];
extern u8 func_0204a584[];
extern u8 func_0204a750[];
extern u8 func_0204a838[];
extern u8 func_0204aa58[];
extern u8 func_0204aac4[];
extern u8 func_0204ab3c[];
extern u8 func_0204ab94[];
extern u8 func_0204abe0[];
extern u8 func_0204ac50[];
extern u8 func_0204ac90[];
extern u8 func_0204ad14[];
extern u8 func_0204af44[];
extern u8 func_0204b8fc[];
extern u8 func_0204b934[];
extern u8 func_0204b96c[];
extern u8 func_0204b988[];
extern u8 func_0204ba00[];
extern u8 func_0204ba3c[];
extern u8 func_0204ba74[];
extern u8 func_0204bb30[];
extern u8 func_0204bb54[];
extern u8 func_0204bb94[];
extern u8 func_0204bbe8[];
extern u8 func_0204bc5c[];
extern u8 func_0204bc7c[];
extern u8 func_0204bca8[];
extern u8 func_0204bcf0[];

const u32 data_020fef3c[4]  = {0x0000051F, 0x00000520, 0x00000521, 0x00000000};
const u32 data_020fef4c[86] = {
    0x00000000,           (u32) &func_02048a40, (u32) &func_02048f58, (u32) &func_02048fe0, (u32) &func_02048ed4,
    (u32) &func_02048eec, (u32) &func_020493f0, (u32) &func_020491bc, (u32) &func_02049020, (u32) &func_02049044,
    (u32) &func_02049068, (u32) &func_02049458, (u32) &func_02049660, (u32) &func_02048ea4, (u32) &func_020496f0,
    (u32) &func_0204972c, (u32) &func_02049760, (u32) &func_020497d4, (u32) &func_0204984c, (u32) &func_0204986c,
    (u32) &func_02048c74, (u32) &func_02048c7c, (u32) &func_02048cc4, (u32) &func_02048d9c, (u32) &func_02048e14,
    (u32) &func_02048a48, (u32) &func_020498b0, (u32) &func_020498ec, (u32) &func_02049940, (u32) &func_02049a2c,
    (u32) &func_02049b30, (u32) &func_02049b90, (u32) &func_02049ba4, (u32) &func_02049bb8, (u32) &func_02049d20,
    (u32) &func_02049e80, (u32) &func_02049edc, (u32) &func_02049f3c, (u32) &func_02049f9c, (u32) &func_02049fdc,
    (u32) &func_0204a01c, (u32) &func_02049930, (u32) &func_02048d0c, (u32) &func_02048d54, (u32) &func_0204a05c,
    (u32) &func_0204a0a4, (u32) &func_0204a114, (u32) &func_0204a134, (u32) &func_0204a1e4, (u32) &func_0204a250,
    (u32) &func_0204a29c, (u32) &func_0204a328, (u32) &func_0204a378, (u32) &func_0204a454, (u32) &func_0204a4a4,
    (u32) &func_0204a4e8, (u32) &func_0204a4fc, (u32) &func_0204a564, (u32) &func_0204a584, (u32) &func_0204a750,
    (u32) &func_0204a838, (u32) &func_0204aa58, (u32) &func_0204aac4, (u32) &func_0204ab3c, (u32) &func_0204ab94,
    (u32) &func_0204abe0, (u32) &func_0204ac50, (u32) &func_0204ac90, (u32) &func_0204ad14, (u32) &func_0204af44,
    (u32) &func_0204b8fc, (u32) &func_0204b934, (u32) &func_0204b96c, (u32) &func_0204b988, (u32) &func_0204ba00,
    (u32) &func_0204ba3c, (u32) &func_0204ba74, (u32) &func_0204bb30, (u32) &func_0204bb54, (u32) &func_0204bb94,
    (u32) &func_0204bbe8, (u32) &func_02049e9c, (u32) &func_0204bc5c, (u32) &func_0204bc7c, (u32) &func_0204bca8,
    (u32) &func_0204bcf0};

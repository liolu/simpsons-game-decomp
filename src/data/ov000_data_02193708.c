/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_0210af80[];
extern u8 data_0210af88[];
extern u8 data_0210af9c[];
extern u8 data_0210afbc[];
extern u8 data_0210afc8[];
extern u8 data_0210afe4[];
extern u8 data_021190e8[];
extern u8 data_02119144[];
extern u8 data_0211919c[];
extern u8 data_02119244[];
extern u8 data_02119518[];
extern u8 data_02119538[];
extern u8 data_02119540[];
extern u8 data_0211954c[];
extern u8 data_0211ced4[];
extern u8 data_0211e6c4[];
extern u8 data_0211e6d4[];
extern u8 data_02137900[];
extern u8 data_02137910[];
extern u8 data_02137920[];
extern u8 data_ov000_02193668[];
extern u8 func_02037340[];
extern u8 func_020398bc[];
extern u8 func_020398c4[];
extern u8 func_020398c8[];
extern u8 func_020398d0[];
extern u8 func_020398d8[];
extern u8 func_020398dc[];
extern u8 func_020398e0[];
extern u8 func_020398e8[];
extern u8 func_020398ec[];
extern u8 func_020398f4[];
extern u8 func_020398fc[];
extern u8 func_02039904[];
extern u8 func_0203990c[];
extern u8 func_02039914[];
extern u8 func_0203991c[];
extern u8 func_02039920[];
extern u8 func_02039924[];
extern u8 func_02039928[];
extern u8 func_02039938[];
extern u8 func_0203993c[];
extern u8 func_02039948[];
extern u8 func_0203994c[];
extern u8 func_0203999c[];
extern u8 func_020399a4[];
extern u8 func_020399a8[];
extern u8 func_020399ac[];
extern u8 func_020399b0[];
extern u8 func_020399b4[];
extern u8 func_020399b8[];
extern u8 func_ov000_0216a6fc[];
extern u8 func_ov000_0216a7ac[];
extern u8 func_ov000_0216abd4[];
extern u8 func_ov000_0216ae3c[];
extern u8 func_ov000_0216ae48[];
extern u8 func_ov000_0216b6f0[];
extern u8 func_ov000_0216b718[];
extern u8 func_ov000_0216bb30[];
extern u8 func_ov000_0216bb40[];

u32 data_ov000_02193708[5]  = {(u32) &func_ov000_0216a6fc, (u32) &func_ov000_0216a7ac, (u32) &func_ov000_0216abd4, 0xFFFFFFF0,
                               (u32) &data_ov000_02193668};
u32 data_ov000_0219371c[36] = {
    (u32) &func_020399a8,       (u32) &func_020399a4,       (u32) &func_0203999c,       (u32) &func_ov000_0216bb40,
    (u32) &func_0203994c,       (u32) &func_02037340,       (u32) &func_02039948,       (u32) &func_0203993c,
    (u32) &func_02039938,       (u32) &func_ov000_0216bb30, (u32) &func_02039928,       (u32) &func_02039924,
    (u32) &func_02039920,       (u32) &func_0203991c,       (u32) &func_02039914,       (u32) &func_0203990c,
    (u32) &func_02039904,       (u32) &func_020398fc,       (u32) &func_020398f4,       (u32) &func_020398ec,
    (u32) &func_020398e8,       (u32) &func_020398e0,       (u32) &func_020398dc,       (u32) &func_020398d8,
    (u32) &func_020398d0,       (u32) &func_020398c8,       (u32) &func_020398c4,       (u32) &func_020398bc,
    (u32) &func_ov000_0216ae3c, (u32) &func_ov000_0216ae48, (u32) &func_020399b8,       (u32) &func_020399b4,
    (u32) &func_020399b0,       (u32) &func_020399ac,       (u32) &func_ov000_0216b6f0, (u32) &func_ov000_0216b718};
u32 data_ov000_021937ac[90] = {
    0x75463431,           0x624F636E,           0x6C61436A,           0x3072656C,           0x33314E49,
    0x6F746341,           0x746E4972,           0x616E7265,           0x4132326C,           0x74706164,
    0x75736552,           0x6F54746C,           0x65736142,           0x6F746341,           0x354E4972,
    0x736F6F62,           0x625F3374,           0x69623669,           0x745F646E,           0x33534E49,
    0x7531315F,           0x6570736E,           0x69666963,           0x33456465,           0x4977654E,
    0x69563132,           0x6C626973,           0x656E4565,           0x6547796D,           0x6172656E,
    0x45726F74,           0x5F33534E,           0x73696C35,           0x4E493274,           0x355F3353,
    0x756C6176,           0x56384965,           0x6F746365,           0x49543272,           0x78694635,
    0x69496465,           0x3231694C,           0x45454545,           0x41534E45,           0x3032495F,
    0x69736956,           0x47656C62,           0x72656E65,           0x726F7461,           0x65707954,
    0x45454545,           0x45454545,           0x00000045,           0xFFFFFFFF,           (u32) &data_02137920,
    (u32) &data_0211e6d4, (u32) &data_02137920, (u32) &data_0210afc8, (u32) &data_02137920, (u32) &data_0210afe4,
    (u32) &data_02137920, (u32) &data_0211ced4, (u32) &data_02137920, (u32) &data_02119540, (u32) &data_02137920,
    (u32) &data_0211e6c4, (u32) &data_02137920, (u32) &data_02119144, (u32) &data_02137910, (u32) &data_0211919c,
    (u32) &data_021190e8, (u32) &data_02137910, (u32) &data_0211954c, (u32) &data_02119518, (u32) &data_02137900,
    (u32) &data_0210afbc, 0x00000000,           0x00000002,           (u32) &data_0210af80, 0x00000000,
    (u32) &data_0210af88, 0x00000402,           (u32) &data_02137900, (u32) &data_02119538, 0x00000000,
    0x00000002,           (u32) &data_0210af9c, 0x00000002,           (u32) &data_02119244, 0x00001002};

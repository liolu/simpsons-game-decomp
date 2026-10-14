#include "m2c.h"

M2C_UNK func_020c21a0();                            /* extern */
M2C_UNK func_020c8fa4(void *, M2C_UNK, u16);        /* extern */
M2C_UNK func_020c8fe0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020c9038(void *, s16);                 /* extern */
s32 func_020c9120(void *, M2C_UNK, s32, s32, s32, s32, M2C_UNK *, void *); /* extern */
M2C_UNK func_020e25f4(s32, M2C_UNK, s32);           /* extern */
extern M2C_UNK data_02153258;
extern M2C_UNK func_020c1f40;

s32 func_020c1e84(void *arg0) {
    s32 temp_r5;

    if (M2C_FIELD(arg0, s16 *, 0x80) & 1) {
        return 0;
    }
    func_020c21a0(arg0);
    func_020e25f4(M2C_FIELD(arg0, s32 *, 4), 0, M2C_FIELD(arg0, s32 *, 8));
    temp_r5 = func_020c9120(arg0 + 0x20, 1, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC),
                            (s32) M2C_FIELD(arg0, s16 *, 0x88), &func_020c1f40, arg0);
    func_020c8fa4(arg0 + 0x20, 0, M2C_FIELD(arg0, u16 *, 0x7C));
    func_020c9038(arg0 + 0x20, M2C_FIELD(arg0, s16 *, 0x7E));
    func_020c8fe0(arg0 + 0x20, 0, 0);
    M2C_FIELD(arg0, s16 *, 0x86)        = 0;
    M2C_FIELD(arg0, s16 *, 0x80)        = (s16) (M2C_FIELD(arg0, s16 *, 0x80) | 1);
    M2C_FIELD(&data_02153258, s32 *, 4) = 0;
    return temp_r5;
}

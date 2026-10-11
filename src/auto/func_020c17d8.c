#include "m2c.h"

M2C_UNK func_020c15cc(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020c1734();                                /* extern */
M2C_UNK func_020c1788(s32);                         /* extern */
M2C_UNK func_020e5e60(s32, s32);                    /* extern */
extern M2C_UNK data_02131370;
extern M2C_UNK data_02131394;
extern M2C_UNK data_021313b8;

s32 func_020c17d8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    if (arg0 == 0) {
        func_020c15cc(0, &data_02131370);
        return 0;
    }
    if (arg2 != 0) {
        func_020c15cc(0, &data_02131394);
        return 0;
    }
    temp_r0 = func_020c1734();
    if (temp_r0 == 0) {
        func_020c15cc(0, &data_021313b8);
        return 0;
    }
    func_020e5e60(temp_r0 + 0x1C, arg0);
    func_020c1788(temp_r0);
    return temp_r0;
}

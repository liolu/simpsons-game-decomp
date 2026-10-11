#include "m2c.h"

M2C_UNK func_020c2a70();                            /* extern */
M2C_UNK func_020c2a8c(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_021315f8;
extern M2C_UNK data_021536e0;

s32 func_020c2be4(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    if (M2C_FIELD(&data_021536e0, s32 *, 4) == 0) {
        func_020c2a70();
    }
    func_020c2a8c(&data_021315f8, 6, arg0, arg1, arg2);
    return 0;
}

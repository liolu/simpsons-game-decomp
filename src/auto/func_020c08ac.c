#include "m2c.h"

s32 func_020c084c();                                /* extern */
s32 func_020c0874();                                /* extern */
M2C_UNK func_020c0944();                            /* extern */
M2C_UNK func_020c6548();                            /* extern */
M2C_UNK func_020cc168(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02152b5c;
extern M2C_UNK data_02152b9c;
extern M2C_UNK data_02152bc4;

s32 func_020c08ac(void) {
    if (func_020c084c() == 0) {
        return 0;
    }
    if ((u32) M2C_FIELD(&data_02152b9c, u32 *, 0x24) <= 1U) {
        return 0;
    }
    if (func_020c0874() != 0) {
        return 0;
    }
    if (M2C_FIELD(&data_02152b5c, s32 *, 0x10) == 0) {
        M2C_FIELD(&data_02152b5c, s32 *, 0x10) = 1;
        func_020c0944();
    }
    func_020c6548();
    func_020cc168(&data_02152bc4);
    return 0;
}

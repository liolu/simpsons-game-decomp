#include "m2c.h"

M2C_UNK func_020bdca8(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_02130618;
extern M2C_UNK data_02130624;
extern M2C_UNK data_02130640;
extern M2C_UNK data_0213064c;

void func_020bdf44(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 == NULL) {
        func_020bdca8(&data_02130618, &data_02130624);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = arg1;
        M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
        return;
    }
    func_020bdca8(&data_02130640, &data_0213064c);
}

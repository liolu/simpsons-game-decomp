#include "m2c.h"

M2C_UNK func_020bdca8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020e25f4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02130570;
extern M2C_UNK data_0213057c;
extern M2C_UNK data_02130598;
extern M2C_UNK data_021305a4;

void func_020bde40(void *arg0) {
    if (arg0 == NULL) {
        func_020bdca8(&data_02130570, &data_0213057c);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_020bdca8(&data_02130598, &data_021305a4);
        return;
    }
    func_020e25f4(arg0, 0, 0x48);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

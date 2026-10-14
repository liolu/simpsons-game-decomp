#include "m2c.h"

extern M2C_UNK data_02153020;

void func_020c15cc(M2C_UNK arg0, M2C_UNK arg1) {
    if (M2C_FIELD(&data_02153020, M2C_UNK(**)(s32, M2C_UNK, M2C_UNK), 4) == NULL) {
        return;
    }
    M2C_FIELD(&data_02153020, M2C_UNK(**)(s32, M2C_UNK, M2C_UNK), 4)(M2C_FIELD(&data_02153020, s32 *, 0), arg1, arg0);
}

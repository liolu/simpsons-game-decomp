#include "m2c.h"

extern M2C_UNK data_02152054;

void func_020befa0(M2C_UNK arg0, M2C_UNK arg1) {
    if (M2C_FIELD(&data_02152054, M2C_UNK(**)(s32, M2C_UNK, M2C_UNK), 8) == NULL) {
        return;
    }
    M2C_FIELD(&data_02152054, M2C_UNK(**)(s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD(&data_02152054, s32 *, 4), arg1, arg0);
}

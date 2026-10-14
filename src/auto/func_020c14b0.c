#include "engine.h"
#include "m2c.h"

void func_020e5f28(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02152f10;
extern M2C_UNK data_02152f18;

void func_020c14b0(s32 arg0) {
    func_020e5f28((s32) &data_02152f18, arg0, 0xFF);
    if (M2C_FIELD(&data_02152f10, M2C_UNK(**)(s32, M2C_UNK *), 0) == NULL) {
        return;
    }
    M2C_FIELD(&data_02152f10, M2C_UNK(**)(s32, M2C_UNK *), 0)(M2C_FIELD(&data_02152f10, s32 *, 4), &data_02152f18);
}

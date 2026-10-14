#include "engine.h"
#include "m2c.h"

void func_020e5f28(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02151cfc;
extern M2C_UNK data_02151fd4;

void func_020beb58(s32 arg0) {
    if (arg0 == 0) {
        M2C_FIELD(&data_02151cfc, M2C_UNK(**)(s32, M2C_UNK *), 0)(M2C_FIELD(&data_02151cfc, s32 *, 4), NULL);
        return;
    }
    func_020e5f28((s32) &data_02151fd4, arg0, 0x7F);
    if (M2C_FIELD(&data_02151cfc, M2C_UNK(**)(s32, M2C_UNK *), 0) == NULL) {
        return;
    }
    M2C_FIELD(&data_02151cfc, M2C_UNK(**)(s32, M2C_UNK *), 0)(M2C_FIELD(&data_02151cfc, s32 *, 4), &data_02151fd4);
}

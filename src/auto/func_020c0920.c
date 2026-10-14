#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02152b5c;

void func_020c0920(void) {
    if (M2C_FIELD(&data_02152b5c, M2C_UNK(**)(s32), 0) == NULL) {
        return;
    }
    M2C_FIELD(&data_02152b5c, M2C_UNK(**)(s32), 0)(M2C_FIELD(&data_02152b5c, s32 *, 4));
}

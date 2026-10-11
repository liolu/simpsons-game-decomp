#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02152b5c;

void func_020c0944(void) {
    if (M2C_FIELD(&data_02152b5c, M2C_UNK (**)(s32), 8) == NULL) {
        return;
    }
    M2C_FIELD(&data_02152b5c, M2C_UNK (**)(s32), 8)(M2C_FIELD(&data_02152b5c, s32 *, 0xC));
}

#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02151cdc;
extern M2C_UNK data_02151d0c;

void func_020bea0c(s32 arg0) {
    if (M2C_FIELD(&data_02151d0c, M2C_UNK(**)(s32), 0) == NULL) {
        return;
    }
    M2C_FIELD(&data_02151d0c, M2C_UNK(**)(s32), 0)(M2C_FIELD(&data_02151d0c, s32 *, 4));
    if (M2C_FIELD(&data_02151cdc, s32 *, 8) == 0) {
        M2C_FIELD(&data_02151cdc, s32 *, 0) = arg0;
    }
    M2C_FIELD(&data_02151cdc, s32 *, 8) = (s32) (M2C_FIELD(&data_02151cdc, s32 *, 8) + 1);
}

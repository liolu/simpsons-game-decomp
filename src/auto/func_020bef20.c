#include "engine.h"
#include "m2c.h"

void func_020bee90(void);

extern M2C_UNK data_02151cdc;

void func_020bef20(void) {
    if (M2C_FIELD(&data_02151cdc, s32 *, 4) == 0) {
        func_020bee90();
    }
    M2C_FIELD(&data_02151cdc, s32 *, 4) = (s32) (M2C_FIELD(&data_02151cdc, s32 *, 4) + 1);
}

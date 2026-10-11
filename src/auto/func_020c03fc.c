#include "m2c.h"
#include "engine.h"

M2C_UNK func_020cb9c4(M2C_UNK);

extern M2C_UNK data_02152b44;
extern s32 data_02152b70;

void func_020c03fc(void) {
    s32 temp_r4;

    if (M2C_FIELD(&data_02152b44, s32 *, 8) == 0) {
        temp_r4 = *(s32 *)0x04000210;
        func_020cb9c4(1);
        data_02152b70 = temp_r4;
    }
    M2C_FIELD(&data_02152b44, s32 *, 8) = (s32) (M2C_FIELD(&data_02152b44, s32 *, 8) + 1);
}

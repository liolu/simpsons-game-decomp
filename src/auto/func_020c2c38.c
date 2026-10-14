#include "engine.h"
#include "m2c.h"

void func_020c5660(void);

extern M2C_UNK data_021536e0;

void func_020c2c38(void) {
    if (M2C_FIELD(&data_021536e0, s32 *, 0xC) == 0) {
        func_020c5660();
    }
    M2C_FIELD(&data_021536e0, s32 *, 0xC) = (s32) (M2C_FIELD(&data_021536e0, s32 *, 0xC) + 1);
}

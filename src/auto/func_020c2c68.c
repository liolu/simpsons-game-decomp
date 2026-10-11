#include "m2c.h"
#include "engine.h"

void func_020c5714(void);

extern M2C_UNK data_021536e0;

void func_020c2c68(void) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(&data_021536e0, s32 *, 0xC) - 1;
    M2C_FIELD(&data_021536e0, s32 *, 0xC) = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    func_020c5714();
}

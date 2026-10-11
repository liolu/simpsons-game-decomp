#include "m2c.h"
#include "engine.h"

void func_020b15b4(s32 arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1 = *(M2C_UNK *)arg0 + (arg1 << 0xC);
    *(M2C_UNK *)arg0 = temp_r1;
    if (temp_r1 < 0) {
        *(M2C_UNK *)arg0 = 0;
        return;
    }
    if (temp_r1 > 0x64000) {
        *(M2C_UNK *)arg0 = 0x64000;
    }
}

#include "engine.h"
#include "m2c.h"

void func_0206f744(s32 arg0) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 0xC4);
    if (temp_r1 != 0) {
        M2C_FIELD(arg0, u16 *, 0xC4) = (u16) (temp_r1 - 1);
    }
}

#include "engine.h"
#include "m2c.h"

void func_02016438(s32 arg0, s32 arg1) {
    u8 temp_r3;

    temp_r3                     = M2C_FIELD(arg0, u8 *, 0x38);
    M2C_FIELD(arg0, u8 *, 0x38) = (u8) arg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(s32, u8), 0x24)(arg0, temp_r3);
}

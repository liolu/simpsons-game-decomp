#include "engine.h"
#include "m2c.h"

void func_02054b18(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0xB0) = (s8) arg1;
    if (((u8) arg1 == 1) && (M2C_FIELD(arg0, u8 *, 0xB1) == 1)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x1C) = 1;
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x1C) = 0;
}

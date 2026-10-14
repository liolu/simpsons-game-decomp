#include "engine.h"
#include "m2c.h"

void func_020ce9d4(M2C_UNK, M2C_UNK);

void func_020199d8(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 != M2C_FIELD(arg0, u8 *, 0x2E))) {
        func_020ce9d4((s32) M2C_FIELD(arg0, u8 *, 0x3C), arg1);
        M2C_FIELD(arg0, u8 *, 0x2E) = (u8) arg1;
    }
}

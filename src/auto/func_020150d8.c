#include "m2c.h"
#include "engine.h"

void func_02015280(M2C_UNK);

void func_020150d8(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x104C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1054) = 0;
    M2C_FIELD(arg0, s32 *, 0x1064) = 0;
    func_02015280(arg0);
}

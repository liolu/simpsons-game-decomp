#include "engine.h"
#include "m2c.h"

void func_020c20ac(M2C_UNK);
void func_020c92e8(M2C_UNK);

void func_020c1e54(s32 arg0) {
    if ((arg0 != 0) && (M2C_FIELD(arg0, s16 *, 0) != 0)) {
        func_020c20ac(arg0);
        func_020c92e8(arg0 + 0x20);
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        M2C_FIELD(arg0, s16 *, 0)    = 0;
    }
}

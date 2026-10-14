#include "engine.h"
#include "m2c.h"

void func_020bdb70(M2C_UNK);

void func_020b7dd0(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 3) {
        return;
    }
    func_020bdb70(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
}

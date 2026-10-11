#include "m2c.h"
#include "engine.h"

void func_020672c4(s32 arg0) {
    M2C_FIELD(arg0, s8 *, 0x224) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0xA0)(arg0);
}

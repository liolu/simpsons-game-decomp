#include "m2c.h"
#include "engine.h"

void func_02010014(M2C_UNK);

void func_0201008c(s32 arg0) {
    func_02010014(arg0);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}

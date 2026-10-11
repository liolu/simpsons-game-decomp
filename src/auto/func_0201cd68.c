#include "m2c.h"
#include "engine.h"

void func_020ce6cc(M2C_UNK, M2C_UNK);
M2C_UNK func_020cf564(M2C_UNK, M2C_UNK);
void func_020cf5ac(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0201cd68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == func_020cf564(arg2, arg3)) {
        func_020cf5ac(arg2, arg3, 0);
    }
    func_020ce6cc(arg0, arg0 + arg1);
}

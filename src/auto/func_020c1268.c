#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c0f48(M2C_UNK);
M2C_UNK func_020c101c(M2C_UNK);
void func_020c10a0(M2C_UNK);
void func_020c1218(M2C_UNK);

void func_020c1268(s32 arg0) {
    if (func_020c0f48(arg0) == 1) {
        func_020c10a0(arg0);
        return;
    }
    if (func_020c101c(arg0) != 1) {
        return;
    }
    func_020c1218(arg0);
}

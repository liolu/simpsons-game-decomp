#include "m2c.h"
#include "engine.h"

M2C_UNK func_0201ec5c(void);
void func_0201ef18(M2C_UNK, M2C_UNK);
void func_020b550c(M2C_UNK, M2C_UNK);

void func_020b5dd4(s32 arg0, s32 arg1) {
    M2C_FIELD(*(M2C_UNK *)arg0, s32 *, 4) = arg1;
    if (func_0201ec5c() != 0) {
        func_0201ef18(func_0201ec5c(), arg1);
    }
    func_020b550c((s32) *(M2C_UNK *)arg0, arg1);
}

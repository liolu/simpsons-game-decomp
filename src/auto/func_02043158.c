#include "m2c.h"
#include "engine.h"

void func_020431a0(M2C_UNK);
void func_0204377c(M2C_UNK);
void func_02043f40(M2C_UNK);
void func_02044280(M2C_UNK);
void func_02044bd4(M2C_UNK);
void func_02044e64(M2C_UNK);

void func_02043158(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x25E4) == 0x10) {
        return;
    }
    func_02044e64(arg0);
    func_020431a0(arg0);
    func_0204377c(arg0);
    func_02043f40(arg0);
    func_02044280(arg0);
    func_02044bd4(arg0);
}

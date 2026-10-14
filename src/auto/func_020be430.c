#include "engine.h"
#include "m2c.h"

void func_020be45c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020be940(void);
void func_020be94c(void);

void func_020be430(s32 arg0, s32 arg1, s32 arg2) {
    func_020be940();
    func_020be45c(arg0, arg1, arg2);
    func_020be94c();
}

#include "engine.h"
#include "m2c.h"

void func_020ce808(M2C_UNK, M2C_UNK);

extern s32 data_02153a00;

void func_020c8d00(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020ce808(arg0, 0);
    data_02153a00 &= ~arg0;
}

#include "m2c.h"
#include "engine.h"

M2C_UNK func_020adcac(M2C_UNK);
M2C_UNK func_020adcdc(M2C_UNK);
void func_020b15b4(M2C_UNK, M2C_UNK);
void func_020b1c30(M2C_UNK);

void func_020b1bd0(s32 arg0, s32 arg1) {
    func_020b15b4(arg0, func_020adcac(arg1));
    func_020b15b4(arg0 + 0x18, func_020adcdc(arg1));
    func_020b1c30(arg0);
}

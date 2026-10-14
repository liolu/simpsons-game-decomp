#include "engine.h"
#include "m2c.h"

void func_020b49f0(M2C_UNK);
void func_020b4dac(M2C_UNK);
M2C_UNK func_020b5efc(M2C_UNK);

extern s32 data_0214d4c4;

void func_020b4d38(s32 arg0) {
    if (func_020b5efc(data_0214d4c4 + 4) == 0) {
        return;
    }
    func_020b4dac(arg0);
    func_020b49f0(arg0);
}

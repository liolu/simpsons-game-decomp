#include "m2c.h"
#include "engine.h"

void func_020c1e84(M2C_UNK);
void func_020c90cc(M2C_UNK);

void func_020c208c(s32 arg0) {
    if (arg0 == 0) {
loop_1:
        goto loop_1;
    }
    func_020c1e84(arg0);
    func_020c90cc(arg0 + 0x20);
}

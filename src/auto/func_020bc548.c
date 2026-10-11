#include "m2c.h"
#include "engine.h"

void func_020b824c(void);
void func_020b8250(void);
M2C_UNK func_020bc56c(M2C_UNK);

s32 func_020bc548(s32 arg0) {
    s32 temp_r4;

    func_020b824c();
    temp_r4 = func_020bc56c(arg0);
    func_020b8250();
    return temp_r4;
}

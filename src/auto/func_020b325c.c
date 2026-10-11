#include "m2c.h"
#include "engine.h"

void func_0201c108(M2C_UNK);

extern M2C_UNK data_021054a0;

s32 func_020b325c(s32 arg0) {
    s32 temp_r4;

    if (arg0 >= 0x1F) {
        return 0x1F;
    }
    temp_r4 = *((M2C_UNK *)((s8 *)&data_021054a0 + (arg0 * 4)));
    func_0201c108(temp_r4);
    return temp_r4;
}

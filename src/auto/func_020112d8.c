#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201130c(M2C_UNK);

void func_020112d8(s32 arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    if (func_0201130c(arg0) != 0) {
        return;
    }
    M2C_FIELD(arg1, s32 *, 0xC)    = 0;
    M2C_FIELD(arg1, void **, 8)    = temp_r4;
    M2C_FIELD(temp_r4, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, void **, 4)    = (void *) arg1;
}

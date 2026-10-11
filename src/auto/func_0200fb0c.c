#include "m2c.h"
#include "engine.h"

M2C_UNK func_0200fb40(M2C_UNK);

void func_0200fb0c(s32 arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    if (func_0200fb40(arg0) != 0) {
        return;
    }
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    M2C_FIELD(arg1, void **, 8) = temp_r4;
    M2C_FIELD(temp_r4, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, void **, 4) = (void *) arg1;
}

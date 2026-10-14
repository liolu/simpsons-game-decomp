#include "engine.h"
#include "m2c.h"

M2C_UNK func_02048470(void);

void func_02087d4c(s32 arg0) {
    void *var_r1;

    if (M2C_FIELD(arg0, u8 *, 0x44) == M2C_FIELD((void *) func_02048470(), s8 *, 5)) {
        return;
    }
    var_r1 = M2C_FIELD(arg0, void **, 8);
    if (var_r1 != NULL) {
        var_r1 -= 4;
    }
    M2C_FIELD(var_r1, s8 *, 0x30C) = 0;
}

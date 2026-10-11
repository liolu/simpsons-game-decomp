#include "m2c.h"
#include "engine.h"

M2C_UNK func_02048470(void);

void func_0207f238(s32 arg0) {
    u32 temp_r0;
    void *var_r1;
    void *var_r1_2;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0x5C) + 1;
    M2C_FIELD(arg0, u32 *, 0x5C) = temp_r0;
    if (temp_r0 >= 0x12CU) {
        if (M2C_FIELD(arg0, u8 *, 0x4C) != M2C_FIELD((void *) func_02048470(), s8 *, 5)) {
            var_r1 = M2C_FIELD(arg0, void **, 8);
            if (var_r1 != NULL) {
                var_r1 -= 4;
            }
            M2C_FIELD(var_r1, s8 *, 0x30C) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x60) = 4;
        M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x4C) == M2C_FIELD((void *) func_02048470(), s8 *, 5)) {
        return;
    }
    var_r1_2 = M2C_FIELD(arg0, void **, 8);
    if (var_r1_2 != NULL) {
        var_r1_2 -= 4;
    }
    M2C_FIELD(var_r1_2, s8 *, 0x30C) = 0;
}

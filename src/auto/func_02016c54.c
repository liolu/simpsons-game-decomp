#include "m2c.h"
#include "engine.h"

void func_02016cd4(M2C_UNK);

void func_02016c54(s32 arg0) {
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r1;
    s32 var_r1_2;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xB4) - 1;
    var_r1 = M2C_FIELD(arg0, s32 *, 0x44) + M2C_FIELD(arg0, s32 *, 0x40);
    if (var_r1 >= temp_r3) {
        var_r1 = temp_r3;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = var_r1;
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x40);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0xB4) - temp_r3_2;
    var_r1_2 = M2C_FIELD(arg0, s32 *, 0x3C) + temp_r3_2;
    if (var_r1_2 >= temp_r2) {
        var_r1_2 = temp_r2;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = var_r1_2;
    func_02016cd4(arg0);
}

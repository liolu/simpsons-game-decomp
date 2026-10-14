#include "engine.h"
#include "m2c.h"

void func_0201ecfc(M2C_UNK);

void func_0201f344(s32 arg0) {
    u8 var_r5;

    var_r5 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA1C) <= 0) {
        return;
    }
    do {
        func_0201ecfc((var_r5 * 0x344) + M2C_FIELD(arg0, s32 *, 0xA18));
        var_r5 += 1;
    } while ((s32) var_r5 < (s32) M2C_FIELD(arg0, s32 *, 0xA1C));
}

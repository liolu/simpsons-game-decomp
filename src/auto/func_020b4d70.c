#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201ea04(void);
M2C_UNK func_0201f5e8(M2C_UNK, M2C_UNK);
void func_020b4d38(M2C_UNK);

void func_020b4d70(s32 arg0) {
    s8 var_r0;
    u16 temp_r1;

    temp_r1 = M2C_FIELD((void *) func_0201f5e8(func_0201ea04(), 0), u16 *, 0xE);
    if (temp_r1 != M2C_FIELD(arg0, u16 *, 0x14)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x17)  = var_r0;
    M2C_FIELD(arg0, u16 *, 0x14) = temp_r1;
    func_020b4d38(arg0);
}

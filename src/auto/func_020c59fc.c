#include "m2c.h"
#include "engine.h"

void func_020c2e38(M2C_UNK);
M2C_UNK func_020c3030(M2C_UNK);

void func_020c59fc(s32 arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x10);
    if (M2C_FIELD(*temp_r0, s32 (**)(void **, M2C_UNK), 0x24)(temp_r0, 1) < 0x24) {
        return;
    }
    func_020c2e38(M2C_FIELD(arg0, s32 *, 0));
    func_020c3030(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s8 *, 0xB) = 1;
    M2C_FIELD(arg0, s8 *, 9) = 2;
}

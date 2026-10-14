#include "engine.h"
#include "m2c.h"

void func_0207e990(M2C_UNK);

void func_0207ad48(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x368);
    if (temp_r0 == 0) {
        return;
    }
    func_0207e990(temp_r0);
}

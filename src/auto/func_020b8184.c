#include "m2c.h"
#include "engine.h"

void func_020b7384(void);
void func_020b80e4(M2C_UNK);
void func_020b81c4(M2C_UNK);

void func_020b8184(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x98);
    if (temp_r1 == 0) {
        func_020b80e4(arg0);
    } else if (temp_r1 == 0xA) {
        func_020b7384();
    }
    if (M2C_FIELD(arg0, s32 *, 0xE4) == 0) {
        return;
    }
    func_020b81c4(arg0);
}

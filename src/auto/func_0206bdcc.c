#include "engine.h"
#include "m2c.h"

M2C_UNK func_02047e30(M2C_UNK, M2C_UNK);
M2C_UNK func_02048470(void);
M2C_UNK func_020919bc(void);

extern M2C_UNK data_0214cec8;

void func_0206bdcc(void) {
    if ((u32) func_02047e30(func_02048470(), 0x1F) >= 1U) {
        if (func_020919bc() == 5) {
            M2C_FIELD(&data_0214cec8, s32 *, 0xC) = 0;
            return;
        }
        M2C_FIELD(&data_0214cec8, s32 *, 0xC) = 2;
        return;
    }
    M2C_FIELD(&data_0214cec8, s32 *, 0xC) = 2;
}

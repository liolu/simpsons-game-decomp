#include "m2c.h"
#include "engine.h"

void func_02012e68(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_02012eb0(s32 arg0, s32 arg1) {
    u16 *temp_r1;

    temp_r1 = *(M2C_UNK *)arg1;
    func_02012e68(arg0, (s32) temp_r1, 0, (s32) *temp_r1);
}

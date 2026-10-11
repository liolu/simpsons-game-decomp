#include "m2c.h"
#include "engine.h"

M2C_UNK func_02012ca8(M2C_UNK, M2C_UNK);
void func_02012e68(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_02012e70(s32 arg0, s32 arg1) {
    s32 var_r2;
    u16 *temp_r0;

    temp_r0 = *(M2C_UNK *)arg1;
    if (*temp_r0 == 0) {
        var_r2 = 0;
    } else {
        var_r2 = func_02012ca8((s32) temp_r0, 0);
    }
    func_02012e68(arg0, (s32) *(M2C_UNK *)arg1, var_r2, 0);
}

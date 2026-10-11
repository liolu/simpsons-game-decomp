#include "m2c.h"

u32 func_02047e30(s32, M2C_UNK);                    /* extern */
s32 func_02048470();                                /* extern */
M2C_UNK func_02077580(s32);                         /* extern */
M2C_UNK func_0207ec00();                            /* extern */
M2C_UNK func_0207ec30(void *);                      /* extern */
M2C_UNK func_0207ec70(void *);                      /* extern */
M2C_UNK func_0207ec74(void *);                      /* extern */
M2C_UNK func_0207eda8(void *);                      /* extern */
M2C_UNK func_020912b8();                            /* extern */

void func_0207e8f4(void *arg0) {
    s32 var_r0;

    func_0207ec00();
    func_0207ec74(arg0);
    func_0207ec30(arg0);
    func_0207ec70(arg0);
    var_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (var_r0 != 0) {
        var_r0 -= 4;
    }
    func_02077580(var_r0 + 0x68);
    if (func_02047e30(func_02048470(), 0x1F) >= 1U) {
        func_020912b8();
    }
    func_0207eda8(arg0);
}

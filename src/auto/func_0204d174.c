#include "m2c.h"

M2C_UNK func_02048500(u32);                         /* extern */
M2C_UNK func_0204d33c(void *);                      /* extern */

void *func_0204d174(void *arg0) {
    u32 temp_r5;
    u32 var_r6;

    temp_r5 = (M2C_FIELD(arg0, s32 *, 0x10) * 0xC) + M2C_FIELD(arg0, s32 *, 0);
    var_r6  = (M2C_FIELD(arg0, s32 *, 4) * 0xC) + temp_r5;
    if (var_r6 > temp_r5) {
        do {
            var_r6 -= 0xC;
            func_02048500(var_r6);
        } while (var_r6 > temp_r5);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0204d33c(arg0);
    return arg0;
}

#include "m2c.h"

void *func_020c80c8();            /* extern */
M2C_UNK func_020c8148();   /* extern */
extern M2C_UNK data_021484a0;

void func_02019aec(void *arg0) {
    void *var_r1;

    var_r1 = func_020c80c8(&data_021484a0, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020c80c8(&data_021484a0);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_020c8148(&data_021484a0, var_r1, arg0);
}

#include "m2c.h"

M2C_UNK func_020bf860(M2C_UNK *);                   /* extern */
void *func_020bf8ec();                              /* extern */
extern M2C_UNK data_02130d8c;
extern M2C_UNK data_02130db0;
extern M2C_UNK data_02130dd4;
extern M2C_UNK func_020bf83c;

void func_020bf87c(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r2)(M2C_UNK *, M2C_UNK);
    void *temp_r0;

    if (arg0 == 0) {
        func_020bf860(&data_02130d8c);
        return;
    }
    if (arg1 == 0) {
        func_020bf860(&data_02130db0);
        return;
    }
    temp_r0 = func_020bf8ec();
    if (temp_r0 == NULL) {
        func_020bf860(&data_02130dd4);
        return;
    }
    temp_r2 = M2C_FIELD(temp_r0, M2C_UNK(**)(M2C_UNK *, M2C_UNK), 4);
    if (temp_r2 == NULL) {
        return;
    }
    temp_r2(&func_020bf83c, 0);
}

#include "m2c.h"

M2C_UNK func_020e5e60(void *, M2C_UNK *);           /* extern */
M2C_UNK func_020e5f78(void *, void *);              /* extern */
extern M2C_UNK data_021525b0;

void func_020bf034(void *arg0, void *arg1) {
    s8 temp_r1;

    if (arg1 == NULL) {
        func_020e5e60(arg0, &data_021525b0);
    } else {
        temp_r1 = M2C_FIELD(arg1, s8 *, 0);
        if (temp_r1 == 0) {
            func_020e5e60(arg0, &data_021525b0);
        } else if (temp_r1 == 0x5C) {
            M2C_FIELD(arg0, s8 *, 0) = (s8) M2C_FIELD(&data_021525b0, s8 *, 0);
            M2C_FIELD(arg0, s8 *, 1) = (s8) M2C_FIELD(&data_021525b0, s8 *, 1);
            M2C_FIELD(arg0, s8 *, 2) = 0;
        } else if (M2C_FIELD(arg1, s8 *, 1) == 0x3A) {
            M2C_FIELD(arg0, s8 *, 0) = 0;
        } else {
            func_020e5e60(arg0, &data_021525b0);
        }
    }
    if (arg1 == NULL) {
        return;
    }
    func_020e5f78(arg0, arg1);
}

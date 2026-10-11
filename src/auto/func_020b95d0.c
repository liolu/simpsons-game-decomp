#include "m2c.h"

M2C_UNK func_020beaf0(M2C_UNK *);                   /* extern */
M2C_UNK func_020e5f28(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_021300b0;
extern M2C_UNK data_0214d8b0;
extern M2C_UNK data_0214d8d8;

void func_020b95d0(s32 arg0) {
    if (arg0 == 0) {
        func_020beaf0(&data_021300b0);
        return;
    }
    func_020e5f28(&data_0214d8d8, arg0, 0xFF);
    if (M2C_FIELD(&data_0214d8b0, M2C_UNK (**)(s32, M2C_UNK *), 0) != NULL) {
        M2C_FIELD(&data_0214d8b0, M2C_UNK (**)(s32, M2C_UNK *), 0)(M2C_FIELD(&data_0214d8b0, s32 *, 4), &data_0214d8d8);
    }
    func_020beaf0(&data_0214d8d8);
}

#include "m2c.h"

M2C_UNK func_020e1ddc(M2C_UNK);                     /* extern */
M2C_UNK func_020f3710();                            /* extern */
extern M2C_UNK data_02157790;

void func_020e1d90(M2C_UNK arg0) {
    if (M2C_FIELD(&data_02157790, s32 *, 0xC) == 0) {
        func_020f3710();
        if (M2C_FIELD(&data_02157790, M2C_UNK (**)(), 4) != NULL) {
            M2C_FIELD(&data_02157790, M2C_UNK (**)(), 4)();
            M2C_FIELD(&data_02157790, M2C_UNK (**)(), 4) = NULL;
        }
    }
    func_020e1ddc(arg0);
}

#include "m2c.h"

M2C_UNK func_020e25f4(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02152f10;
extern M2C_UNK data_02152f18;

void func_020c1470(void) {
    func_020e25f4(&data_02152f18, 0, 0x100);
    M2C_FIELD(&data_02152f10, s32 *, 0) = 0;
    M2C_FIELD(&data_02152f10, s32 *, 4) = 0;
}

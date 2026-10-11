#include "m2c.h"

s32 func_020bc4d4();                                /* extern */
M2C_UNK func_020c6b40();                            /* extern */
M2C_UNK func_020c6f84(s32, s32);                    /* extern */
extern M2C_UNK data_02136b84;
extern u8 data_02153908;

s32 func_020c6eb4(s32 arg0) {
    if (data_02153908 == 0) {
        func_020c6f84(M2C_FIELD(&data_02136b84, s32 *, 0xC), M2C_FIELD(&data_02136b84, s32 *, 0x18));
        return 0;
    }
    if (arg0 == 0) {
        func_020c6f84(M2C_FIELD(&data_02136b84, s32 *, 0xC), M2C_FIELD(&data_02136b84, s32 *, 0x14));
        return 0;
    }
    func_020c6b40();
    return func_020bc4d4();
}

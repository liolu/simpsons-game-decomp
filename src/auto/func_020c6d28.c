#include "m2c.h"

M2C_UNK func_020bc0f0(s32);                         /* extern */
s32 *func_020c6f14();                               /* extern */
M2C_UNK func_020c6f84(s32, s32);                    /* extern */
extern M2C_UNK data_02136b84;
extern u8 data_02153908;

void func_020c6d28(s32 arg0) {
    if (data_02153908 == 0) {
        func_020c6f84(M2C_FIELD(&data_02136b84, s32 *, 0x20), M2C_FIELD(&data_02136b84, s32 *, 0x18));
        return;
    }
    if (arg0 == 0) {
        func_020c6f84(M2C_FIELD(&data_02136b84, s32 *, 0x20), M2C_FIELD(&data_02136b84, s32 *, 0x14));
        return;
    }
    func_020bc0f0(*func_020c6f14());
}

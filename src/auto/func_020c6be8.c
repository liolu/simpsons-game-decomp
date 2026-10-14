#include "engine.h"
#include "m2c.h"

void func_020bcb8c(M2C_UNK, M2C_UNK);
M2C_UNK func_020c6f14(M2C_UNK);
void func_020c6f84(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02136b84;
extern u8 data_02153908;

void func_020c6be8(s32 arg0, s32 arg1) {
    if (data_02153908 == 0) {
        func_020c6f84(M2C_FIELD(&data_02136b84, s32 *, 0xC), M2C_FIELD(&data_02136b84, s32 *, 0x18));
        return;
    }
    if (arg0 == 0) {
        func_020c6f84(M2C_FIELD(&data_02136b84, s32 *, 0xC), M2C_FIELD(&data_02136b84, s32 *, 0x14));
        return;
    }
    if (arg1 == 0) {
        func_020c6f84(M2C_FIELD(&data_02136b84, s32 *, 0xC), M2C_FIELD(&data_02136b84, s32 *, 4));
        return;
    }
    func_020bcb8c(*(s32 *) func_020c6f14(arg0), arg1);
}

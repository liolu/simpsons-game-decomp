#include "engine.h"
#include "m2c.h"

void func_0202f1b8(M2C_UNK, M2C_UNK);

extern s32 data_0214cb48;

void func_0202ecb8(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x7D) == arg1) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x7D) = (u8) arg1;
    func_0202f1b8(data_0214cb48, arg0);
}

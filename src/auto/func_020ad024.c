#include "m2c.h"
#include "engine.h"

void func_020b30ec(M2C_UNK);

void func_020ad024(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB8) != 0x35) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x109) == 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x109) = 0U;
    func_020b30ec(M2C_FIELD(arg0, s32 *, 0x278));
}

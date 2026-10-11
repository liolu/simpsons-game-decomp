#include "m2c.h"
#include "engine.h"

void func_02019be0(M2C_UNK);
void func_020ce9bc(M2C_UNK, M2C_UNK);
void func_020cea60(M2C_UNK);

void func_02019b40(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020ce9bc((s32) M2C_FIELD(arg0, u8 *, 0x3C), -0x2D3);
    }
    func_020cea60((s32) M2C_FIELD(arg0, u8 *, 0x3C));
    func_02019be0(arg0);
}

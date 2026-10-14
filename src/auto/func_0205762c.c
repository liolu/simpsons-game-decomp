#include "engine.h"
#include "m2c.h"

void func_0202afa0(M2C_UNK, M2C_UNK);
void func_02058b9c(M2C_UNK, M2C_UNK);

void func_0205762c(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xFC) = arg1;
    func_0202afa0(M2C_FIELD(arg0, s32 *, 0x20), arg1);
    func_02058b9c(arg0 + 0x24, (s32) (u8) arg1);
}

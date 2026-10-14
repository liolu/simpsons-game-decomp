#include "engine.h"
#include "m2c.h"

void func_020c80e0(M2C_UNK, M2C_UNK);
void func_020c8c80(M2C_UNK);

extern M2C_UNK data_02149f08;

void func_0201d6b0(s32 arg0) {
    func_020c8c80(M2C_FIELD(arg0, s32 *, 0x40));
    func_020c80e0((s32) &data_02149f08, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}

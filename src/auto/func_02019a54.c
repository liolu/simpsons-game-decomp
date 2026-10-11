#include "m2c.h"
#include "engine.h"

void func_020c9928(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020c9954(M2C_UNK);

void func_02019a54(s32 arg0) {
    M2C_FIELD(arg0, s8 *, 0x2E) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D) = 0;
    M2C_FIELD(arg0, s8 *, 0x2F) = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s8 *, 0x40) = 0x7F;
    M2C_FIELD(arg0, s8 *, 0x41) = 0x7F;
    func_020c9954(arg0 + 0x1C);
    func_020c9928(arg0 + 0x1C, 0x7F00, 1);
}

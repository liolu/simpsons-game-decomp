#include "engine.h"
#include "m2c.h"

void func_020bda20(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020bda68(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020b7c18(s32 arg0) {
    func_020bda20(M2C_FIELD(arg0, s32 *, 8), arg0 + 0xAC, arg0 + 0xB0);
    func_020bda68(M2C_FIELD(arg0, s32 *, 8), (s32) M2C_FIELD(arg0, s16 *, 0xA6), (s32) M2C_FIELD(arg0, s16 *, 0xA8),
                  (s32) M2C_FIELD(arg0, s16 *, 0xAA));
}

/* compiler: 1.2/sp3  */
#include "engine.h"
#include "m2c.h"

void func_020bfa14(M2C_UNK);
M2C_UNK func_020c012c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020c01f0(M2C_UNK, M2C_UNK);
M2C_UNK func_020e5ff8(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02136b64;
extern M2C_UNK data_02136b6c;
extern M2C_UNK data_02136b74;

void func_020c65e4(s32 arg0) {
    M2C_UNK sp0;

    if (arg0 == 0) {
        return;
    }
    if (func_020e5ff8(arg0, (s32) &data_02136b64) == 0) {
        return;
    }
    func_020bfa14(arg0);
    if (func_020c012c((s32) &data_02136b6c, arg0, (s32) &sp0) < 0) {
        return;
    }
    func_020c01f0((s32) &data_02136b74, arg0);
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020ccb74(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020cceb8(M2C_UNK, M2C_UNK);
void func_020ce124(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020cfadc(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020d9c30(void);

extern M2C_UNK data_02156590;

s32 func_020d9b00(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_020d9c30();
    if (temp_r0 == 0) {
        return 8;
    }
    func_020ce124(arg0, temp_r0, arg1);
    func_020cceb8(temp_r0, arg1);
    temp_r4 = func_020cfadc(0xA, temp_r0, 0);
    func_020ccb74((s32) &data_02156590, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}

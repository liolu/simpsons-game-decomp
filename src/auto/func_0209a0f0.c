#include "engine.h"
#include "m2c.h"

M2C_UNK func_0209a0bc(M2C_UNK);
void func_020b3288(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02101e88;
extern M2C_UNK data_02101e8c;

void func_0209a0f0(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0209a0bc(arg0);
    func_020b3288(*((M2C_UNK *) ((s8 *) &data_02101e8c + (temp_r4 * 0x2C))),
                  *((M2C_UNK *) ((s8 *) &data_02101e88 + (func_0209a0bc(arg0) * 0x2C))));
}

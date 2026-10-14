/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);
void func_020e0d40(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020e0efc(void);

extern s32 data_02157180;

void func_020e0cec(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_020cd940();
    if (func_020e0efc() != 0) {
        func_020e0d40(data_02157180 + 0xC4, 0, arg0, 0);
    }
    func_020cd954(temp_r4);
}

/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);
void func_020ce124(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020dc020(M2C_UNK);

extern s32 data_0215715c;

s32 func_020dd424(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_020cd940();
    if ((data_0215715c != 0) && (func_020dc020(arg0) != 0)) {
        func_020ce124(((arg0 - 1) * 0x16) + (data_0215715c + 0x1340), data_0215715c + 0x1772, 0x16);
        func_020cd954(temp_r4);
        return data_0215715c + 0x1772;
    }
    func_020cd954(temp_r4);
    return 0;
}

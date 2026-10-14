/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020cd50c(M2C_UNK, M2C_UNK);
M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);
M2C_UNK func_020e1744(void);

extern s32 data_02157194;

void func_020e1434(s32 arg0) {
    s32 temp_r4;
    s32 var_r1;

    temp_r4       = func_020cd940();
    data_02157194 = arg0;
    if (func_020e1744() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_020cd50c(0xF000, var_r1);
    }
    func_020cd954(temp_r4);
}

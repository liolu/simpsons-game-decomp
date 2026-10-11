/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);

extern s32 data_02153f9c;
extern s32 data_02153fa0;

void func_020ceff4(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020cd940();
    if (data_02153fa0 == 0) {
        data_02153fa0 = arg0;
        data_02153f9c = arg0;
    } else {
        *(M2C_UNK *)data_02153fa0 = arg0;
        data_02153fa0 = arg0;
    }
    *(M2C_UNK *)arg0 = 0;
    func_020cd954(temp_r0);
}

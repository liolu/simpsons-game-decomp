/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);

extern s32 data_02153f98;
extern s32 data_02153f9c;
extern s32 data_02153fb4;

s32 func_020ced64(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020cd940();
    if (data_02153f9c == 0) {
        var_r4 = data_02153f98;
    } else {
        var_r4 = data_02153fb4;
    }
    func_020cd954(temp_r0);
    return var_r4;
}

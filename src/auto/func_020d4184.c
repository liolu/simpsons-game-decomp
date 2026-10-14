/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);

extern s32 data_02155c24;

s32 func_020d4184(void) {
    s32 temp_r0;

    temp_r0 = func_020cd940();
    if (data_02155c24 != 0) {
        func_020cd954(temp_r0);
        return 0;
    }
    data_02155c24 = 1;
    func_020cd954(temp_r0);
    return 1;
}

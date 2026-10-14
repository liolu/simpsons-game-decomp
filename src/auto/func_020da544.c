/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);
M2C_UNK func_020d9ad4(void);
M2C_UNK func_020d9af0(void);

s32 func_020da544(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020cd940();
    temp_r0 = func_020d9ad4();
    if (temp_r0 != 0) {
        func_020cd954(temp_r5);
        return temp_r0;
    }
    M2C_FIELD((void *) func_020d9af0(), s32 *, 0xC8) = arg0;
    func_020cd954(temp_r5);
    return 0;
}

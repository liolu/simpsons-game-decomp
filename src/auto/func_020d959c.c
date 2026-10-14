/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);

extern void *data_0215658c;

s32 func_020d959c(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_020cd940();
    if (data_0215658c != NULL) {
        var_r4 = M2C_FIELD(data_0215658c, u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_020cd954(temp_r0);
    return (s32) var_r4;
}

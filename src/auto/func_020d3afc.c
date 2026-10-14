/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020d3b38(M2C_UNK, M2C_UNK);
void func_020d413c(M2C_UNK, M2C_UNK);
void func_020d4144(void);

s32 func_020d3afc(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020d3b38((s32) func_020d413c, (s32) &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020d4144();
    return sp0;
}

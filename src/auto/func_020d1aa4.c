/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020d093c(M2C_UNK, M2C_UNK);
M2C_UNK func_020d943c(void);

void func_020d1aa4(s32 arg0) {
    s32 var_r1;

    if (func_020d943c() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_020d093c(arg0, var_r1);
}

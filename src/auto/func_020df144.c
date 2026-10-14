/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020dab24(M2C_UNK);
void func_020dec60(M2C_UNK, M2C_UNK);

extern void *data_02157158;

s32 func_020df144(void) {
    s32 var_r4;

    var_r4 = func_020dab24(M2C_FIELD(data_02157158, s32 *, 0x508));
    func_020dec60(1, var_r4);
    if (var_r4 == 2) {
        var_r4 = 0;
    }
    return var_r4;
}

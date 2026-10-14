/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020cd940();                                /* extern */
M2C_UNK func_020cd954(s32);                         /* extern */
s32 func_020df144();                                /* extern */
M2C_UNK func_020e0cec(M2C_UNK *);                   /* extern */
s32 func_020e0efc();                                /* extern */
extern void *data_02157158;
extern M2C_UNK func_020df138;

s32 func_020df0b0(void) {
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 1;
    temp_r4 = func_020cd940();
    if (M2C_FIELD(data_02157158, u16 *, 0x526) == 0) {
        M2C_FIELD(data_02157158, s32 *, 0x5E4) = 0;
        M2C_FIELD(data_02157158, u16 *, 0x526) = 1U;
        if (func_020e0efc() != 0) {
            func_020e0cec(&func_020df138);
            var_r5 = 0;
        } else {
            var_r5 = func_020df144();
        }
    }
    func_020cd954(temp_r4);
    return var_r5;
}

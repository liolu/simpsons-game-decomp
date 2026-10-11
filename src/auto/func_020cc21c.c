/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cc614();                            /* extern */
M2C_UNK func_020cc868(s32, void *);                 /* extern */
s32 func_020cd940();                                /* extern */
M2C_UNK func_020cd954(s32);                         /* extern */
extern void **data_02153c00;

void func_020cc21c(s32 arg0) {
    s32 temp_r5;
    void *temp_r4;

    temp_r5 = func_020cd940();
    temp_r4 = *data_02153c00;
    if (arg0 != 0) {
        M2C_FIELD(temp_r4, s32 *, 0x78) = arg0;
        func_020cc868(arg0, temp_r4);
    }
    M2C_FIELD(temp_r4, s32 *, 0x64) = 0;
    func_020cc614();
    func_020cd954(temp_r5);
}

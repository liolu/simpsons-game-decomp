/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cc2d0(s32);                         /* extern */
M2C_UNK func_020cc8f8(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_020cc9b0(void *);                      /* extern */
extern s32 data_02153bf0;

void func_020cc314(void *arg0, s32 arg1) {
    if (data_02153bf0 != 0) {
        func_020cc8f8(arg0, func_020cc2d0);
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_020cc9b0(arg0);
        return;
    }
    func_020cc2d0(arg1);
}

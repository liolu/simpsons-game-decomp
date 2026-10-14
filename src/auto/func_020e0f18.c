/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cc168();                      /* extern */
M2C_UNK func_020cc3b0(); /* extern */
s32 func_020cd940();                                /* extern */
M2C_UNK func_020cd954();                         /* extern */
M2C_UNK func_020e0ee8();                         /* extern */
extern void *data_02157180;
extern M2C_UNK func_020e0fa0;

void func_020e0f18(void *arg0, s32 arg1) {
    s32 temp_ip;
    s32 temp_r4;

    temp_r4 = func_020cd940();
    if (data_02157180 == NULL) {
        data_02157180 = arg0;
        func_020e0ee8(arg0 + 0xC4);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        temp_ip                      = (arg1 - 0xE4) & ~3;
        func_020cc3b0(arg0, &func_020e0fa0, arg0, arg0 + 0xE4 + temp_ip, temp_ip, 0);
        func_020cc168(arg0);
    }
    func_020cd954(temp_r4);
}

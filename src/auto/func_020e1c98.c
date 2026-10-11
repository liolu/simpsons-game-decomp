/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cc168(void *);                      /* extern */
M2C_UNK func_020cc3b0(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
s32 func_020cd940();                                /* extern */
M2C_UNK func_020cd954(s32);                         /* extern */
M2C_UNK func_020e1c84(M2C_UNK *);                   /* extern */
extern void *data_02157368;
extern M2C_UNK data_0215736c;
extern M2C_UNK data_02157790;
extern M2C_UNK func_020e1b98;

void func_020e1c98(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020cd940();
    if (data_02157368 == NULL) {
        data_02157368 = arg0;
        func_020e1c84(arg0 + 0xC4);
        func_020e1c84(&data_0215736c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_020cc3b0(arg0, &func_020e1b98, arg0, &data_02157790, 0x400, 0x14);
        func_020cc168(arg0);
    }
    func_020cd954(temp_r4);
}

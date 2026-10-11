#include "m2c.h"

M2C_UNK func_0208775c();                            /* extern */
M2C_UNK func_020a0bf8(s32, u8, s32);                /* extern */
s32 func_020b5cbc(s32);                             /* extern */
extern s32 data_0214d3e0;
extern s32 data_0214d4c4;

void func_02087680(void *arg0, s32 arg1) {
    func_0208775c();
    if ((func_020b5cbc(data_0214d4c4 + 4) > 1) && (arg1 > 0)) {
        func_020a0bf8(data_0214d3e0, M2C_FIELD(arg0, u8 *, 0x44), arg1);
    }
}

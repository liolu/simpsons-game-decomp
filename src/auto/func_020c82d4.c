#include "m2c.h"

M2C_UNK func_020c8218(s32, void *);                 /* extern */
M2C_UNK func_020c82a4(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_020c8360(void *);                          /* extern */
extern s32 data_021539e8;
extern M2C_UNK data_021539ec;

void func_020c82d4(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, volatile s32 *, 0) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) | (u8) arg4);
    func_020c82a4(arg0 + 0xC, 4);
    if (data_021539e8 == 0) {
        func_020c82a4(&data_021539ec, 4);
        data_021539e8 = 1;
    }
    func_020c8218(func_020c8360(arg0), arg0);
}

#include "m2c.h"

M2C_UNK func_0201b1cc(void *);                      /* extern */
M2C_UNK func_0201d538(void *);                      /* extern */
M2C_UNK func_020ccd50(M2C_UNK *);                   /* extern */
M2C_UNK func_020ccdc0(M2C_UNK *);                   /* extern */
extern s32 data_02148db8;
extern M2C_UNK data_02149430;

void func_0201b438(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_020ccdc0(&data_02149430);
    if (data_02148db8 != 0) {
        func_020ccdc0(data_02148db8 + 0x4C8);
    }
    func_0201b1cc(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124) = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_0201d538(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_020ccd50(&data_02149430);
    if (data_02148db8 == 0) {
        return;
    }
    func_020ccd50(data_02148db8 + 0x4C8);
}

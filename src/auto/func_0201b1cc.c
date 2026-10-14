#include "m2c.h"

M2C_UNK func_0201b264(void *);                      /* extern */
M2C_UNK func_0201d5b4(void *);                      /* extern */
M2C_UNK func_020ccd50(M2C_UNK *);                   /* extern */
M2C_UNK func_020ccdc0(M2C_UNK *);                   /* extern */
extern s32 data_02148db8;
extern M2C_UNK data_02149430;

void func_0201b1cc(void *arg0) {
    func_020ccdc0(&data_02149430);
    if (data_02148db8 != 0) {
        func_020ccdc0(data_02148db8 + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_0201d5b4(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x16C)(arg0);
    }
    func_0201b264(arg0);
    func_020ccd50(&data_02149430);
    if (data_02148db8 == 0) {
        return;
    }
    func_020ccd50(data_02148db8 + 0x4C8);
}

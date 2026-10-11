#include "m2c.h"

M2C_UNK func_020befd4(s32);                         /* extern */
M2C_UNK func_020bf87c(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020c0104(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_02105e6c;
extern M2C_UNK data_021311e0;
extern M2C_UNK data_021311e4;
extern M2C_UNK func_020befc8;
extern M2C_UNK func_020c0328;
extern M2C_UNK func_020c15b4;

void func_020c0338(void) {
    func_020befd4(data_02105e6c);
    func_020c0104(&func_020c0328, 0);
    func_020bf87c(&data_021311e0, &func_020c15b4, 0);
    func_020bf87c(&data_021311e4, &func_020befc8, 0);
}

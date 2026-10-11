#include "m2c.h"

M2C_UNK func_0202b0c4(s8, s32);                     /* extern */
void *func_02048470();                              /* extern */
s32 func_020b5cbc(s32);                             /* extern */
extern s32 data_0214d4c4;

void func_0202842c(void) {
    void *temp_r4;

    temp_r4 = func_02048470();
    func_0202b0c4(M2C_FIELD(temp_r4, s8 *, 5), func_020b5cbc(data_0214d4c4 + 4));
}

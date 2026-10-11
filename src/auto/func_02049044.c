#include "m2c.h"

s32 func_020483e0(s8);                              /* extern */
void *func_02048470();                              /* extern */
M2C_UNK func_02055f24(s32, u8);                     /* extern */

s32 func_02049044(s32 arg0, u8 *arg1) {
    func_02055f24(func_020483e0(M2C_FIELD(func_02048470(), s8 *, 5)), *arg1);
    return 1;
}

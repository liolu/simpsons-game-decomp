#include "m2c.h"

s32 *func_020483e0(s8);                             /* extern */
void *func_02048470();                              /* extern */
M2C_UNK func_02087704(s32);                         /* extern */

s32 func_0204a564(void) {
    func_02087704(*func_020483e0(M2C_FIELD(func_02048470(), s8 *, 5)));
    return 1;
}

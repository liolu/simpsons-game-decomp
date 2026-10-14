#include "m2c.h"

M2C_UNK func_0201c320(void *);                      /* extern */
M2C_UNK func_0201db94(void *);                      /* extern */

void *func_0201d84c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_0201c320(arg0 + 0x1C);
    func_0201db94(arg0);
    return arg0;
}

#include "m2c.h"

M2C_UNK func_020c1774(s8 *);                        /* extern */
M2C_UNK func_020c1ab8();                            /* extern */

void func_020c185c(s8 *arg0) {
    if (arg0 == NULL) {
        return;
    }
    func_020c1ab8();
    if (*arg0 != 1) {
        return;
    }
    *arg0 = 0;
    func_020c1774(arg0);
}

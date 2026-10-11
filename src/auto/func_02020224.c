#include "m2c.h"

s32 func_02020288();                         /* extern */
M2C_UNK func_02020290();                     /* extern */
s32 func_020202bc();                         /* extern */
M2C_UNK func_020204c4();                     /* extern */
s32 func_02020514();                         /* extern */

s32 func_02020224(M2C_UNK arg0) {
    if (func_02020288() != 0) {
        func_020204c4(arg0);
    }
    func_02020290(arg0);
    if (func_020202bc(arg0) == 0) {
        return 1;
    }
    if ((func_02020288(arg0) != 0) && (func_02020514(arg0) == 0)) {
        return 2;
    }
    return 0;
}

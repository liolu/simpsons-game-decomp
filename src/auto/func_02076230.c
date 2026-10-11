#include "m2c.h"

M2C_UNK func_0200f744(void *);                      /* extern */
M2C_UNK func_0201e47c(void *);                      /* extern */
M2C_UNK func_02057450(void *);                      /* extern */
M2C_UNK func_020a9130(void *);                      /* extern */

void *func_02076230(void *arg0) {
    func_0200f744(M2C_FIELD(arg0, void **, 0x1E8));
    func_02057450(arg0 + 0x28);
    func_020a9130(arg0 + 0x1C);
    func_0201e47c(arg0 + 4);
    func_0200f744(arg0);
    return arg0;
}

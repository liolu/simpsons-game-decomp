#include "m2c.h"

M2C_UNK func_0200f744(void *);                      /* extern */
M2C_UNK func_0201e47c(void *);                      /* extern */
M2C_UNK func_02097404(void *);                      /* extern */

void *func_02099968(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x94);
    if (temp_r4 != NULL) {
        func_02097404(temp_r4);
        func_0200f744(temp_r4);
    }
    func_0201e47c(arg0 + 4);
    func_0200f744(arg0);
    return arg0;
}

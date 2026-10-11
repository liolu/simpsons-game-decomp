/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d1810();                            /* extern */
extern s32 data_02155b58;

void func_020d17b4(s32 arg0) {
    if (data_02155b58 != 0) {
        return;
    }
    data_02155b58 = 1;
    func_020d1810(arg0);
}

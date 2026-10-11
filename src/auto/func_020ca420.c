/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cb218(u16);                         /* extern */
extern u16 data_02153b54;

u16 func_020ca420(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0 = 0;
    data_02153b54 |= temp_r4;
    func_020cb218(temp_r4);
    return temp_r4;
}

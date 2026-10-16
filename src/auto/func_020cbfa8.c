/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020cd940();
M2C_UNK func_020cd954();
extern s32 data_02153bf4;

s32 func_020cbfa8(void) {
    M2C_UNK m2c_irq;
    s32 var_r4;

    m2c_irq = func_020cd940();
    var_r4  = 0;
    if (data_02153bf4 != 0) {
        var_r4 = data_02153bf4;
        data_02153bf4 -= 1;
    }
    func_020cd954(m2c_irq);
    return var_r4;
}

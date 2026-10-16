/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020cd940();
M2C_UNK func_020cd954();
extern u32 data_02153bf4;

u32 func_020cbfe0(void) {
    M2C_UNK m2c_irq;
    M2C_UNK saved_reg_r4;
    u32 var_r4;

    var_r4  = saved_reg_r4;
    m2c_irq = func_020cd940();
    if ((u32) data_02153bf4 < -1U) {
        var_r4 = data_02153bf4;
        data_02153bf4 += 1;
    }
    func_020cd954(m2c_irq);
    return var_r4;
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020cd940();
M2C_UNK func_020cd954();
extern M2C_UNK data_02153c08;

s32 func_020cc02c(s32 arg0) {
    M2C_UNK m2c_irq;
    s32 temp_r4;

    m2c_irq                               = func_020cd940();
    temp_r4                               = M2C_FIELD(&data_02153c08, s32 *, 0xC);
    M2C_FIELD(&data_02153c08, s32 *, 0xC) = arg0;
    func_020cd954(m2c_irq);
    return temp_r4;
}

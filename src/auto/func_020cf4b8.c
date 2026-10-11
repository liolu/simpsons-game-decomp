/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020cce9c(M2C_UNK, M2C_UNK);

extern void *data_02155ac0;

s32 func_020cf4b8(void) {
    func_020cce9c((s32) (data_02155ac0 + 4), 4);
    return M2C_FIELD(data_02155ac0, s32 *, 4);
}

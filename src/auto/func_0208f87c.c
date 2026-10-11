#include "m2c.h"
#include "engine.h"

void func_02027738(M2C_UNK, M2C_UNK);

void func_0208f87c(s32 arg0) {
    M2C_FIELD(arg0, s8 *, 0x318) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1C4) != 5) {
        return;
    }
    func_02027738(arg0 + 0x184, 4);
}

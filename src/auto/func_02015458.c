#include "m2c.h"
#include "engine.h"

M2C_UNK func_020d2ad8(M2C_UNK);
void func_020d2aec(M2C_UNK);
void func_020d2eb4(void);

extern u8 data_02145f80;

void func_02015458(void) {
    if (data_02145f80 == 0) {
        return;
    }
    func_020d2eb4();
    func_020d2aec(4);
    if (func_020d2ad8(4) == 0) {
        data_02145f80 = 0;
    }
}

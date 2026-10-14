#include "engine.h"
#include "m2c.h"

void func_02015458(void);
M2C_UNK func_020d2ad8(M2C_UNK);
void func_020d2aec(M2C_UNK);
void func_020d2f58(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern s8 data_02145f80;
extern M2C_UNK data_02145f8a;

void func_02015410(void) {
    func_02015458();
    func_020d2f58(0x20, 4, (s32) &data_02145f8a, 5);
    func_020d2aec(2);
    if (func_020d2ad8(2) == 0) {
        data_02145f80 = 1;
    }
}

#include "m2c.h"
#include "engine.h"

void func_020bb13c(M2C_UNK);
void func_020bb9b4(void);
void func_020bb9c0(void);

void func_020bafc8(s32 arg0) {
    func_020bb13c(arg0);
    func_020bb9b4();
    if (M2C_FIELD(arg0, s8 *, 0x4D) == 1) {
        M2C_FIELD(arg0, s8 *, 0x4A) = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x49) = 0;
    func_020bb9c0();
}

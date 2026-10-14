#include "engine.h"
#include "m2c.h"

void func_020bb0b0(M2C_UNK);
void func_020bb9b4(void);
void func_020bb9c0(void);

s32 func_020bb110(s32 arg0) {
    func_020bb9b4();
    func_020bb0b0(arg0);
    M2C_FIELD(arg0, s32 *, 0x60) = 0xFFFFF;
    func_020bb9c0();
    return 1;
}

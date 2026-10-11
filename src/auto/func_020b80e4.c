#include "m2c.h"
#include "engine.h"

void func_020b7e94(M2C_UNK);
void func_020b8004(M2C_UNK);
M2C_UNK func_020bdab4(M2C_UNK);
void func_020bdb70(M2C_UNK);
void func_020bdba0(M2C_UNK);

void func_020b80e4(s32 arg0) {
    if ((M2C_FIELD(arg0, s32 *, 4) == 1) && (func_020bdab4(M2C_FIELD(arg0, s32 *, 8)) == 0)) {
        M2C_FIELD(arg0, M2C_UNK (**)(s32, s32, s32, s32), 0x78)(M2C_FIELD(arg0, s32 *, 0x7C), arg0 + 0x68, arg0 + 0x6C, arg0 + 0x70);
        func_020b7e94(arg0);
        M2C_FIELD(arg0, s32 *, 4) = 2;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 2) {
        return;
    }
    func_020bdba0(M2C_FIELD(arg0, s32 *, 8));
    if (func_020bdab4(M2C_FIELD(arg0, s32 *, 8)) != 3) {
        return;
    }
    func_020b8004(arg0);
    func_020bdb70(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, M2C_UNK (**)(s32, s32, s32), 0x80)(M2C_FIELD(arg0, s32 *, 0x84), M2C_FIELD(arg0, s32 *, 0x94), M2C_FIELD(arg0, s32 *, 0x90));
    M2C_FIELD(arg0, s32 *, 4) = 3;
}

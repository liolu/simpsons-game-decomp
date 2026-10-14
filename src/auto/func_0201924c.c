#include "engine.h"
#include "m2c.h"

void func_02019310(void);
void func_02019348(void);
void func_02019670(void);
void func_020c8c54(void);
void func_020c9654(void);
void func_020ceab4(void);
void func_020d35e0(M2C_UNK);
void func_020d35f8(M2C_UNK);

extern M2C_UNK data_021460a0;
extern M2C_UNK data_021460b0;
extern M2C_UNK data_021460bc;

void func_0201924c(void) {
    if (M2C_FIELD(&data_021460a0, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(&data_021460a0, s32 *, 4) = 1;
    func_020ceab4();
    M2C_FIELD(&data_021460a0, void (**)(), 0x1C) = func_02019310;
    M2C_FIELD(&data_021460a0, s32 *, 0x20)       = 0;
    M2C_FIELD(&data_021460a0, void (**)(), 0x10) = func_02019348;
    M2C_FIELD(&data_021460a0, s32 *, 0x14)       = 0;
    func_020d35f8((s32) &data_021460bc);
    func_020d35e0((s32) &data_021460b0);
    func_020c8c54();
    func_020c9654();
    func_02019670();
    M2C_FIELD(&data_021460a0, s8 *, 0)    = -1;
    M2C_FIELD(&data_021460a0, s32 *, 0xC) = 1;
}

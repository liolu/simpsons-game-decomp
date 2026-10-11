#include "m2c.h"
#include "engine.h"

void func_020c0920(void);
void func_020cc168(M2C_UNK);
void func_020cc21c(M2C_UNK);
void func_020cd9bc(void);

extern M2C_UNK data_02152b5c;
extern M2C_UNK data_02152b9c;
extern M2C_UNK data_02152d44;

void func_020c0390(void) {
    if ((u32) M2C_FIELD(&data_02152b9c, u32 *, 0x24) <= 1U) {
        func_020cd9bc();
        return;
    }
    if (M2C_FIELD(&data_02152b9c, u32 *, 0x24) != 2) {
        return;
    }
    func_020c0920();
    M2C_FIELD(&data_02152b5c, s32 *, 0x10) = 0;
    func_020cc168((s32) &data_02152d44);
    func_020cc21c(0);
}

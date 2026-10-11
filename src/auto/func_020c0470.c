#include "m2c.h"
#include "engine.h"

void func_020bee30(void);
void func_020bee40(void);
void func_020c0884(void);
void func_020cc168(M2C_UNK);
void func_020cc21c(M2C_UNK);

extern M2C_UNK data_02152b9c;
extern M2C_UNK data_02152c84;

void func_020c0470(void) {
    if (M2C_FIELD(&data_02152b9c, s32 *, 8) == 1) {
        do {
            if (M2C_FIELD(&data_02152b9c, s32 *, 0x14) == 1) {
                func_020cc168(M2C_FIELD(&data_02152b9c, s32 *, 0x268));
            } else {
                func_020cc168((s32) &data_02152c84);
            }
            func_020bee30();
            func_020bee40();
            M2C_FIELD(&data_02152b9c, s32 *, 0x26C) = (s32) (M2C_FIELD(&data_02152b9c, s32 *, 0x26C) + 1);
            func_020cc21c(0);
        } while (M2C_FIELD(&data_02152b9c, s32 *, 8) == 1);
    }
    func_020c0884();
}

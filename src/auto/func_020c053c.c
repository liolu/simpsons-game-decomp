#include "engine.h"
#include "m2c.h"

void func_020bead0(void);
void func_020beae0(void);
M2C_UNK func_020bee80(void);
void func_020c0944(void);
void func_020cc21c(M2C_UNK);

extern M2C_UNK data_02152b5c;
extern M2C_UNK data_02152b9c;

void func_020c053c(void) {
    if (M2C_FIELD(&data_02152b9c, s32 *, 0) == 1) {
        do {
            if (func_020bee80() == 0) {
                func_020bead0();
                if (M2C_FIELD(&data_02152b5c, s32 *, 0x10) == 0) {
                    M2C_FIELD(&data_02152b5c, s32 *, 0x10) = 1;
                    func_020c0944();
                }
                func_020beae0();
                func_020cc21c(0);
            }
            M2C_FIELD(&data_02152b9c, s32 *, 0x274) = (s32) (M2C_FIELD(&data_02152b9c, s32 *, 0x274) + 1);
        } while (M2C_FIELD(&data_02152b9c, s32 *, 0) == 1);
    }
    M2C_FIELD(&data_02152b9c, s32 *, 4) = 1;
}

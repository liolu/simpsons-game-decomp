/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020caa68(M2C_UNK);
void func_020cddc4(M2C_UNK);

extern s32 data_02136d90;
extern s32 data_02153b7c;
extern s32 data_02153b80;
extern s32 data_02153b84;

s32 func_020cb5d4(void) {
    if (data_02136d90 != -1) {
        func_020cddc4(data_02136d90);
    }
    func_020caa68(data_02153b84);
    data_02153b84 = 0;
    data_02153b80 = 0;
    data_02153b7c = 0;
    return (s32) &data_02153b7c;
}

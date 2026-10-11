/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020ca458(M2C_UNK);
void func_020cddc4(M2C_UNK);

extern s32 data_02136d90;
extern s32 data_02153b88;

s32 func_020cb2d0(void) {
    if (data_02136d90 != -1) {
        func_020cddc4(data_02136d90);
    }
    func_020ca458(data_02153b88);
    data_02153b88 = 0;
    return (s32) &data_02153b88;
}

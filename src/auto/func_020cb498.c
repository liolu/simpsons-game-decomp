/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020ca9b0(M2C_UNK);
void func_020cddc4(M2C_UNK);

extern s32 data_02136d90;
extern s32 data_02153b74;
extern s32 data_02153b78;

s32 func_020cb498(void) {
    if (data_02136d90 != -1) {
        func_020cddc4(data_02136d90);
    }
    func_020ca9b0(data_02153b78);
    data_02153b78 = 0;
    data_02153b74 = 0;
    return (s32) &data_02153b74;
}

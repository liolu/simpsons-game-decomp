/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020cce4c(M2C_UNK);
void func_020cf20c(void);
void func_020cf3d4(void);

extern s32 data_02153f78;
extern M2C_UNK data_02153f7c;

void func_020ceab4(void) {
    if (data_02153f78 != 0) {
        return;
    }
    data_02153f78 = 1;
    func_020cce4c((s32) &data_02153f7c);
    func_020cf20c();
    func_020cf3d4();
}

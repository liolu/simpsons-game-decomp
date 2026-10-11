/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_020ca3d8(void);

extern s32 data_02153b74;
extern s32 data_02153b78;

void func_020cb564(void) {
    s32 temp_r0;

    temp_r0 = func_020ca3d8();
    data_02153b78 = temp_r0;
    switch (temp_r0) {                              /* irregular */
    case 0x0:
        return;
    case 0x40:
        data_02153b74 = 0x06894000;
        return;
    case 0x20:
        data_02153b74 = 0x06890000;
        return;
    }
}

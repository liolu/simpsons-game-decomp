#include "m2c.h"

s32 func_020bf26c();                                /* extern */
s32 func_020bf7c0();                                /* extern */
s32 func_020bf7c8();                                /* extern */

s32 func_020bf230(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0x12C:
        return func_020bf26c();
    case 0xC8:
        return func_020bf7c0();
    case 0xC9:
        return func_020bf7c8();
    default:
        return -1;
    }
}

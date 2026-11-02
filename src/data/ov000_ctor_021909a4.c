/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_ov000_0218c0e0[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_ov000_021909a4[1] = {(u32) &__sinit_ov000_0218c0e0};

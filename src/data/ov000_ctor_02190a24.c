/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_ov000_0218ffdc[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_ov000_02190a24[1] = {(u32) &__sinit_ov000_0218ffdc};

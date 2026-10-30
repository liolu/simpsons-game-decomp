/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov000_0218ad1c[];
extern u8 data_ov000_0218ad5c[];

const u32 data_ov000_0218ace4[4]  = {0x00000BB8, 0x00000BBA, 0x00000BBB, 0x00000000};
const u32 data_ov000_0218acf4[10] = {(u32) &data_ov000_0218ad1c, 0x00000BBF, (u32) &data_ov000_0218ad1c, 0x00000BC0,
                                     (u32) &data_ov000_0218ad1c, 0x00000BC1, (u32) &data_ov000_0218ad1c, 0x00000BC2,
                                     (u32) &data_ov000_0218ad5c, 0x00000BCA};

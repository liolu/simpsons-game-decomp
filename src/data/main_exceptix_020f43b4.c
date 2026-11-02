/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020f4248[];
extern u8 data_020f4250[];
extern u8 data_020f4258[];
extern u8 data_020f4260[];
extern u8 data_020f4268[];
extern u8 data_020f4270[];
extern u8 data_020f4278[];
extern u8 data_020f4280[];
extern u8 data_020f4288[];
extern u8 data_020f4290[];
extern u8 data_020f42a8[];
extern u8 data_020f42bc[];
extern u8 data_020f42e0[];
extern u8 data_020f42f8[];
extern u8 data_020f4300[];
extern u8 data_020f4310[];
extern u8 data_020f4318[];
extern u8 data_020f432c[];
extern u8 data_020f4334[];
extern u8 data_020f433c[];
extern u8 data_020f4350[];
extern u8 data_020f4364[];
extern u8 data_020f4378[];
extern u8 data_020f43a0[];
extern u8 func_020e1d6c[];
extern u8 func_020e1d90[];
extern u8 func_020e1ddc[];
extern u8 func_020e1f04[];
extern u8 func_020e1f1c[];
extern u8 func_020e1f30[];
extern u8 func_020e1fe4[];
extern u8 func_020e206c[];
extern u8 func_020e231c[];
extern u8 func_020e2404[];
extern u8 func_020e246c[];
extern u8 func_020e2488[];
extern u8 func_020e2510[];
extern u8 func_020e25f4[];
extern u8 func_020e2ce0[];
extern u8 func_020e2f2c[];
extern u8 func_020e320c[];
extern u8 func_020e380c[];
extern u8 func_020e3f70[];
extern u8 func_020e4794[];
extern u8 func_020e47c0[];
extern u8 func_020e4804[];
extern u8 func_020e491c[];
extern u8 func_020e4984[];
extern u8 func_020e499c[];
extern u8 func_020e4ec0[];
extern u8 func_020e5c98[];
extern u8 func_020e5cec[];
extern u8 func_020e5d14[];
extern u8 func_020e617c[];
extern u8 func_020e73c8[];
extern u8 func_020e77b0[];
extern u8 func_020e7bfc[];
extern u8 func_020e7d08[];
extern u8 func_020e7d18[];
extern u8 func_020e82e8[];
extern u8 func_020e8538[];
extern u8 func_020e881c[];
extern u8 func_020e8cd8[];
extern u8 func_020e9324[];
extern u8 func_020e9c14[];
extern u8 func_020e9c54[];
extern u8 func_020e9c7c[];
extern u8 func_020e9d5c[];
extern u8 func_020ea494[];
extern u8 func_020ea66c[];
extern u8 func_020eb7f4[];
extern u8 func_020ebebc[];
extern u8 func_020ec1dc[];
extern u8 func_020ecd98[];
extern u8 func_020ed03c[];
extern u8 func_020ed1cc[];
extern u8 func_020ed38c[];
extern u8 func_020ed448[];
extern u8 func_020ed694[];
extern u8 func_020ed6a0[];
extern u8 func_020ed768[];
extern u8 func_020ed7a8[];
extern u8 func_020ed874[];
extern u8 func_020ed9f8[];
extern u8 func_020eda94[];
extern u8 func_020ee27c[];
extern u8 func_020ee3fc[];
extern u8 func_020ee4a4[];
extern u8 func_020eeb0c[];
extern u8 func_020eec48[];
extern u8 func_020eec74[];
extern u8 func_020eec8c[];
extern u8 func_020eed0c[];
extern u8 func_020eed8c[];
extern u8 func_020eeda4[];
extern u8 func_020eee18[];
extern u8 func_020eee94[];
extern u8 func_020eef70[];
extern u8 func_020eef88[];
extern u8 func_020eefb0[];
extern u8 func_020eefc0[];
extern u8 func_020ef000[];
extern u8 func_020ef020[];
extern u8 func_020ef040[];
extern u8 func_020ef058[];
extern u8 func_020ef070[];
extern u8 func_020ef088[];
extern u8 func_020ef19c[];
extern u8 func_020ef1b0[];
extern u8 func_020ef304[];
extern u8 func_020ef3ac[];
extern u8 func_020ef4a4[];
extern u8 func_020ef4ec[];
extern u8 func_020ef5e8[];
extern u8 func_020ef604[];
extern u8 func_020ef618[];
extern u8 func_020ef638[];
extern u8 func_020ef698[];
extern u8 func_020ef6c8[];
extern u8 func_020f2130[];
extern u8 func_020f2180[];
extern u8 func_020f2338[];
extern u8 func_020f245c[];
extern u8 func_020f27e4[];
extern u8 func_020f3094[];
extern u8 func_020f31e8[];
extern u8 func_020f326c[];
extern u8 func_020f3318[];
extern u8 func_020f3378[];
extern u8 func_020f35b0[];
extern u8 func_020f369c[];
extern u8 func_020f36c4[];
extern u8 func_020f36e4[];
extern u8 func_020f3710[];
extern u8 func_020f3754[];
extern u8 func_020f37b0[];
extern u8 func_020f386c[];
extern u8 func_020f391c[];
extern u8 func_020f39ac[];
extern u8 func_020f3a08[];
extern u8 func_020f3a40[];
extern u8 func_020f3a70[];
extern u8 func_020f3a84[];
extern u8 func_020f3aa0[];
extern u8 func_020f3ab4[];
extern u8 func_020f3ac8[];
extern u8 func_020f3ae4[];
extern u8 func_020f3af8[];
extern u8 func_020f3b14[];
extern u8 func_020f3d44[];
extern u8 func_020f3e14[];
extern u8 func_020f3e20[];
extern u8 func_020f3e2c[];
extern u8 func_020f3e44[];
extern u8 func_020f4088[];
extern u8 func_020f4148[];
extern u8 func_020f423c[];
#pragma define_section TABLE ".exceptix"    \
                             ".exceptix" RW
__declspec(TABLE) u32 data_020f43b4[399] = {(u32) &func_020e1d6c, 0x00000025, 0x00100000,
                                            (u32) &func_020e1d90, 0x0000004D, 0x00100100,
                                            (u32) &func_020e1ddc, 0x00000129, 0x00200300,
                                            (u32) &func_020e1f04, 0x00000019, 0x00000000,
                                            (u32) &func_020e1f1c, 0x00000015, 0x00100000,
                                            (u32) &func_020e1f30, 0x00000069, 0x00403F00,
                                            (u32) &func_020e1fe4, 0x00000089, 0x00200300,
                                            (u32) &func_020e206c, 0x000002B1, 0x0060FF00,
                                            (u32) &func_020e231c, 0x000000E9, 0x00100100,
                                            (u32) &func_020e2404, 0x0000001D, 0x00100000,
                                            (u32) &func_020e246c, 0x0000001D, 0x00100000,
                                            (u32) &func_020e2488, 0x00000089, 0x00301F00,
                                            (u32) &func_020e2510, 0x00000079, 0x00403F00,
                                            (u32) &func_020e25f4, 0x00000015, 0x00100100,
                                            (u32) &func_020e2ce0, 0x0000024D, 0x0090FF20,
                                            (u32) &func_020e2f2c, 0x000002E1, 0x00A0FF20,
                                            (u32) &func_020e320c, 0x000004DD, 0x00F07F20,
                                            (u32) &func_020e380c, 0x00000765, 0x00C0FF20,
                                            (u32) &func_020e3f70, 0x00000824, (u32) &data_020f4248,
                                            (u32) &func_020e4794, 0x0000002D, 0x00200300,
                                            (u32) &func_020e47c0, 0x00000045, 0x00200300,
                                            (u32) &func_020e4804, 0x00000119, 0x00300120,
                                            (u32) &func_020e491c, 0x00000069, 0x00300300,
                                            (u32) &func_020e4984, 0x00000019, 0x00000000,
                                            (u32) &func_020e499c, 0x0000002D, 0x00300020,
                                            (u32) &func_020e4ec0, 0x00000D54, (u32) &data_020f4250,
                                            (u32) &func_020e5c98, 0x00000055, 0x00200000,
                                            (u32) &func_020e5cec, 0x00000029, 0x00300020,
                                            (u32) &func_020e5d14, 0x00000131, 0x00200300,
                                            (u32) &func_020e617c, 0x0000124C, (u32) &data_020f4258,
                                            (u32) &func_020e73c8, 0x000003E9, 0x0060FF00,
                                            (u32) &func_020e77b0, 0x0000044D, 0x0080FF00,
                                            (u32) &func_020e7bfc, 0x00000099, 0x00600300,
                                            (u32) &func_020e7d08, 0x00000011, 0x00000000,
                                            (u32) &func_020e7d18, 0x00000011, 0x00000000,
                                            (u32) &func_020e82e8, 0x00000251, 0x0090FF20,
                                            (u32) &func_020e8538, 0x000002E5, 0x00A0FF20,
                                            (u32) &func_020e881c, 0x00000399, 0x00F07F20,
                                            (u32) &func_020e8cd8, 0x0000064C, (u32) &data_020f4260,
                                            (u32) &func_020e9324, 0x000008F0, (u32) &data_020f4268,
                                            (u32) &func_020e9c14, 0x00000041, 0x00200300,
                                            (u32) &func_020e9c54, 0x00000029, 0x00300020,
                                            (u32) &func_020e9c7c, 0x00000071, 0x00300300,
                                            (u32) &func_020e9d5c, 0x00000739, 0x00C0FF20,
                                            (u32) &func_020ea494, 0x000001D9, 0x00500F20,
                                            (u32) &func_020ea66c, 0x00001188, (u32) &data_020f4270,
                                            (u32) &func_020eb7f4, 0x000006C8, (u32) &data_020f4278,
                                            (u32) &func_020ebebc, 0x00000321, 0x0080FF20,
                                            (u32) &func_020ec1dc, 0x00000BBC, (u32) &data_020f4280,
                                            (u32) &func_020ecd98, 0x0000027D, 0x0080FF20,
                                            (u32) &func_020ed03c, 0x00000171, 0x00500020,
                                            (u32) &func_020ed1cc, 0x000001C1, 0x00603F20,
                                            (u32) &func_020ed38c, 0x000000BD, 0x00300120,
                                            (u32) &func_020ed448, 0x0000024D, 0x00300120,
                                            (u32) &func_020ed694, 0x0000000D, 0x00000000,
                                            (u32) &func_020ed6a0, 0x0000000D, 0x00000000,
                                            (u32) &func_020ed768, 0x00000041, 0x00200300,
                                            (u32) &func_020ed7a8, 0x000000CD, 0x0050FF00,
                                            (u32) &func_020ed874, 0x00000185, 0x00D0FF00,
                                            (u32) &func_020ed9f8, 0x0000009D, 0x00100000,
                                            (u32) &func_020eda94, 0x00000385, 0x00B00300,
                                            (u32) &func_020ee27c, 0x00000181, 0x00E01F00,
                                            (u32) &func_020ee3fc, 0x000000A9, 0x00200300,
                                            (u32) &func_020ee4a4, 0x00000624, (u32) &data_020f4288,
                                            (u32) &func_020eeb0c, 0x00000025, 0x00100000,
                                            (u32) &func_020eec48, 0x0000002D, 0x00200100,
                                            (u32) &func_020eec74, 0x00000019, 0x00000000,
                                            (u32) &func_020eec8c, 0x00000080, (u32) &data_020f4290,
                                            (u32) &func_020eed0c, 0x00000081, 0x00500320,
                                            (u32) &func_020eed8c, 0x00000019, 0x00100100,
                                            (u32) &func_020eeda4, 0x00000075, 0x00300F00,
                                            (u32) &func_020eee18, 0x0000007D, 0x00300F00,
                                            (u32) &func_020eee94, 0x00000075, 0x00300F00,
                                            (u32) &func_020eef70, 0x00000015, 0x00100100,
                                            (u32) &func_020eef88, 0x00000029, 0x00100100,
                                            (u32) &func_020eefb0, 0x00000011, 0x00000000,
                                            (u32) &func_020eefc0, 0x00000040, (u32) &data_020f42a8,
                                            (u32) &func_020ef000, 0x00000021, 0x00100100,
                                            (u32) &func_020ef020, 0x00000021, 0x00100100,
                                            (u32) &func_020ef040, 0x00000015, 0x00100100,
                                            (u32) &func_020ef058, 0x00000019, 0x00100100,
                                            (u32) &func_020ef070, 0x00000019, 0x00100100,
                                            (u32) &func_020ef088, 0x0000010C, (u32) &data_020f42bc,
                                            (u32) &func_020ef19c, 0x00000015, 0x00100100,
                                            (u32) &func_020ef1b0, 0x00000154, (u32) &data_020f42e0,
                                            (u32) &func_020ef304, 0x0000006D, 0x00100100,
                                            (u32) &func_020ef3ac, 0x000000ED, 0x00500F20,
                                            (u32) &func_020ef4a4, 0x0000003D, 0x00100100,
                                            (u32) &func_020ef4ec, 0x000000F1, 0x00500F20,
                                            (u32) &func_020ef5e8, 0x0000001D, 0x00100100,
                                            (u32) &func_020ef604, 0x00000015, 0x00100100,
                                            (u32) &func_020ef618, 0x00000021, 0x00100100,
                                            (u32) &func_020ef638, 0x00000021, 0x00100100,
                                            (u32) &func_020ef698, 0x00000031, 0x00100100,
                                            (u32) &func_020ef6c8, 0x0000002D, 0x00100000,
                                            (u32) &func_020f2130, 0x00000051, 0x00300F00,
                                            (u32) &func_020f2180, 0x00000035, 0x00200700,
                                            (u32) &func_020f2338, 0x00000109, 0x00503F00,
                                            (u32) &func_020f245c, 0x00000388, (u32) &data_020f42f8,
                                            (u32) &func_020f27e4, 0x000008B0, (u32) &data_020f4300,
                                            (u32) &func_020f3094, 0x00000154, (u32) &data_020f4310,
                                            (u32) &func_020f31e8, 0x00000085, 0x00401F00,
                                            (u32) &func_020f326c, 0x000000A8, (u32) &data_020f4318,
                                            (u32) &func_020f3318, 0x00000060, (u32) &data_020f432c,
                                            (u32) &func_020f3378, 0x000001DC, (u32) &data_020f4334,
                                            (u32) &func_020f35b0, 0x000000ED, 0x00700300,
                                            (u32) &func_020f369c, 0x00000029, 0x00100000,
                                            (u32) &func_020f36c4, 0x00000015, 0x00100100,
                                            (u32) &func_020f36e4, 0x0000002D, 0x00100100,
                                            (u32) &func_020f3710, 0x00000045, 0x00200300,
                                            (u32) &func_020f3754, 0x0000005C, (u32) &data_020f433c,
                                            (u32) &func_020f37b0, 0x000000BC, (u32) &data_020f4350,
                                            (u32) &func_020f386c, 0x000000B0, (u32) &data_020f4364,
                                            (u32) &func_020f391c, 0x00000090, (u32) &data_020f4378,
                                            (u32) &func_020f39ac, 0x0000005C, (u32) &data_020f43a0,
                                            (u32) &func_020f3a08, 0x00000035, 0x00200300,
                                            (u32) &func_020f3a40, 0x00000031, 0x00100000,
                                            (u32) &func_020f3a70, 0x00000015, 0x00100100,
                                            (u32) &func_020f3a84, 0x0000001D, 0x00100100,
                                            (u32) &func_020f3aa0, 0x00000015, 0x00100100,
                                            (u32) &func_020f3ab4, 0x00000015, 0x00100100,
                                            (u32) &func_020f3ac8, 0x0000001D, 0x00100100,
                                            (u32) &func_020f3ae4, 0x00000015, 0x00100100,
                                            (u32) &func_020f3af8, 0x0000001D, 0x00100100,
                                            (u32) &func_020f3b14, 0x00000231, 0x0060FF00,
                                            (u32) &func_020f3d44, 0x000000D1, 0x00500000,
                                            (u32) &func_020f3e14, 0x0000000D, 0x00000000,
                                            (u32) &func_020f3e20, 0x0000000D, 0x00000000,
                                            (u32) &func_020f3e2c, 0x00000019, 0x00100000,
                                            (u32) &func_020f3e44, 0x00000019, 0x00100000,
                                            (u32) &func_020f4088, 0x000000A1, 0x00200700,
                                            (u32) &func_020f4148, 0x00000031, 0x00200100,
                                            (u32) &func_020f423c, 0x0000000D, 0x00000000};

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PMi_CommonCallback from https://github.com/RonyxDumb/mkds src/arm9/0214f630_func_0214f630.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef enum {
    PXI_FIFO_TAG_EX = 0,
    PXI_FIFO_TAG_USER_0,
    PXI_FIFO_TAG_USER_1,
    PXI_FIFO_TAG_SYSTEM,
    PXI_FIFO_TAG_NVRAM,
    PXI_FIFO_TAG_RTC,
    PXI_FIFO_TAG_TOUCHPANEL,
    PXI_FIFO_TAG_SOUND,
    PXI_FIFO_TAG_PM,
    PXI_FIFO_TAG_MIC,
    PXI_FIFO_TAG_WM,
    PXI_FIFO_TAG_FS,
    PXI_FIFO_TAG_OS,
    PXI_FIFO_TAG_CTRDG,
    PXI_FIFO_TAG_CARD,
    PXI_FIFO_TAG_WVR,
    PXI_FIFO_TAG_CTRDG_Ex,
    PXI_FIFO_TAG_CTRDG_PHI,
    PXI_MAX_FIFO_TAG = 32
} PXIFifoTag;
typedef void (*PMCallback)(u32 result, void *arg);
typedef struct {
    u16 flag;
    u16 padding;
    u16 *buffer;
} PMData16;
extern void func_020d3f38(PXIFifoTag tag, u32 data, BOOL err);
extern const u16(*ctrdgi_fl_maxtime);
typedef struct {
    BOOL lock;
    PMCallback callback;
    void *callbackArg;
    void *work;
} PMiWork;
extern PMiWork data_02155c24;
extern PMData16 data_02155c4c[5];
extern volatile BOOL data_02155c10;
extern volatile BOOL data_02155c14;
void func_020d40e8(u32 result);
void func_020d3f38(PXIFifoTag tag, u32 data, BOOL err) {

#pragma unused(tag)
    u16 command;
    u16 pxiResult;

    if (err) {
        func_020d40e8(2);
        return;
    }

    command   = (u16) ((data & 0x00007f00) >> 8);
    pxiResult = (u16) ((data & 0x000000ff) >> 0);

    if (0x0070 <= command && command <= 0x0074) {
        int num     = (int) (command - 0x0070);
        u16 value   = (u16) (pxiResult & 0xff);
        u16 *buffer = data_02155c4c[num].buffer;

        if (buffer) {
            *buffer = value;
        }
        data_02155c4c[num].flag = 1;
        pxiResult               = 0;
    } else if (command == 0x0060) {
        data_02155c10 = 1;
    } else if (command == 0x0062) {
        data_02155c14 = 1;
    } else if (command == 0x0067) {
        if (data_02155c24.work) {
            *(u32 *) data_02155c24.work = pxiResult;
        }
        pxiResult = 0;
    }

    func_020d40e8(pxiResult);
}

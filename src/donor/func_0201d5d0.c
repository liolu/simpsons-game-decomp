/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020afae4 from projets/dragon-ball-origins/src/donor/func_020afae4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_020ce7d4(u32 chBitMask, int volume, int shift);
extern s32 func_020cf4f0(int volume);
typedef struct UnkSleepCallbackInfo {
    void (*func)(void *);
    void *arg;
    struct UnkSleepCallbackInfo *next;
} UnkSleepCallbackInfo;
typedef void (*UnkStrmCallback)(int status, int chNum, void **buffer, u32 len, int format, void *arg);
typedef struct UnkSndStrm {
    UnkLink link;
    UnkSleepCallbackInfo preSleepInfo;
    UnkSleepCallbackInfo postSleepInfo;
    int format;
    BOOL active : 1;
    BOOL started : 1;
    u32 bufSize;
    int interval;
    UnkStrmCallback callback;
    void *arg;
    int curBlock;
    int volume;
    int alarmNo;
    u32 chBitMask;
    int chNum;
    u8 chNo[16];
} UnkSndStrm;
typedef struct UnkSndStrmChannel {
    u8 *bufAddr;
    int volume;
} UnkSndStrmChannel;
extern UnkSndStrmChannel data_02149f54[16];
void func_0201d5d0(UnkSndStrm *strm, int volume) {
    int chNo;
    int i;

    strm->volume = volume;

    for (i = 0; i < strm->chNum; i++) {
        s32 vol;
        chNo = strm->chNo[i];
        vol  = func_020cf4f0(strm->volume + data_02149f54[chNo].volume);

        func_020ce7d4(1 << chNo, vol & 0xFF, vol >> 8);
    }
}

/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02040254 from projets/spider-man-web-of-shadows/src/donor/func_02040254.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} NNSFndList;
extern void *func_020c80c8(NNSFndList *list, void *object);
typedef struct NNSSndHeap *NNSSndHeapHandle;
typedef struct NNSSndFader {
    int origin;
    int target;
    int counter;
    int frame;
} NNSSndFader;
typedef enum NNSSndPlayerSeqType {
    NNS_SND_PLAYER_SEQ_TYPE_INVALID,
    NNS_SND_PLAYER_SEQ_TYPE_SEQ,
    NNS_SND_PLAYER_SEQ_TYPE_SEQARC
} NNSSndPlayerSeqType;
typedef struct NNSSndHandle {
    struct NNSSndSeqPlayer *player;
} NNSSndHandle;
typedef struct NNSSndSeqPlayer {
    struct NNSSndHandle *handle;
    struct NNSSndPlayer *player;
    struct NNSSndPlayerHeap *heap;
    NNSFndLink playerLink;
    NNSFndLink prioLink;
    NNSSndFader fader;
    u8 status;
    u8 startFlag;
    u8 pauseFlag;
    u8 prepareFlag;
    u32 commandTag;
    u16 seqType;
    u16 pad2;
    u16 seqNo;
    u16 seqArcIndex;
    u8 playerNo;
    u8 prio;
    s16 volume;
    u8 initVolume;
    u8 extVolume;
    u16 pad3_;
} NNSSndSeqPlayer;
typedef struct NNSSndPlayer {
    NNSFndList playerList;
    NNSFndList heapList;
    u32 playableSeqCount;
    u32 allocChBitFlag;
    u8 volume;
    u8 pad_;
    u16 pad2_;
} NNSSndPlayer;
extern int func_020194b0(int seqArcNo, int index);
typedef struct NNSSndPlayerHeap {
    NNSFndLink link;
    NNSSndHeapHandle handle;
    NNSSndSeqPlayer *player;
    int playerNo;
} NNSSndPlayerHeap;
extern NNSFndList data_021484a0;
int func_020194b0(int seqArcNo, int index) {
    int count = 0;

    NNSSndSeqPlayer *seqPlayer = ((void *) 0);
    while ((seqPlayer = (NNSSndSeqPlayer *) func_020c80c8(&data_021484a0, seqPlayer)) != ((void *) 0)) {
        if (seqPlayer->seqType == NNS_SND_PLAYER_SEQ_TYPE_SEQARC && seqPlayer->seqNo == seqArcNo &&
            seqPlayer->seqArcIndex == index) {
            count++;
        }
    }

    return count;
}

/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020aef40 from projets/dragon-ball-origins/src/donor/func_020aef40.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct {
    void *prevObject;
    void *nextObject;
} UnkFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} UnkFndList;
typedef struct {
    UnkFndList playerList;
    UnkFndList heapList;
    u32 playableSeqCount;
    u32 allocSize;
    u8 volume;
    u8 unk_21[3];
} UnkSndPlayerGroupState;
typedef struct {
    UnkFndLink link;
    void *heap;
    u32 unk_0c;
    int playerNo;
} UnkSndPlayerHeap;
extern UnkSndPlayerGroupState data_021488f8[32];
extern void func_020c8218(UnkFndList *list, void *object);
extern void *func_02018da4(void *heap, u32 size, void (*callback)(void *, u32, u32, u32), u32 data1, u32 data2);
extern void *func_020c97fc(void *buffer, u32 size);
extern void func_02019c64(void *mem, u32 size, u32 data1, u32 data2);
BOOL func_0201938c(int playerNo, void *heap, u32 size) {
    UnkSndPlayerHeap *playerHeap;
    void *buffer;

    playerHeap = func_02018da4(heap, size + sizeof(UnkSndPlayerHeap), func_02019c64, 0, 0);
    if (playerHeap == 0) {
        return 0;
    }
    playerHeap->unk_0c   = 0;
    playerHeap->playerNo = playerNo;
    playerHeap->heap     = 0;

    buffer = func_020c97fc(playerHeap + 1, size);
    if (buffer == 0) {
        return 0;
    }
    playerHeap->heap = buffer;
    func_020c8218(&data_021488f8[playerNo].heapList, playerHeap);
    return 1;
}

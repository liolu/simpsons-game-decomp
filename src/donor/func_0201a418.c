/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02041260 from projets/spider-man-web-of-shadows/src/donor/func_02041260.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndSeqInfo {
    u32 fileId;
    u16 bankNo;
} UnkSndSeqInfo;
extern void *func_02019f90(int index);
extern void *func_0201a334(u32 fileId);
extern int func_0201a418(int seqNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern int func_0201a4fc(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_0201a768(u32 fileId, void *heap, BOOL addToArc);
int func_0201a418(int seqNo, u32 flags, void *heap, BOOL addToArc, void **pData) {
    UnkSndSeqInfo *info = func_02019f90(seqNo);
    void *data;
    int result;

    if (info == 0) {
        return 2;
    }

    result = func_0201a4fc(info->bankNo, flags, heap, addToArc, 0);
    if (result != 0) {
        return result;
    }

    if (flags & 1) {
        data = func_0201a768(info->fileId, heap, addToArc);
        if (data == 0) {
            return 6;
        }
    } else {
        data = func_0201a334(info->fileId);
    }

    if (pData != 0) {
        *pData = data;
    }
    return 0;
}
extern int func_0201a4fc(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_0201a768(u32 fileId, void *heap, BOOL addToArc);

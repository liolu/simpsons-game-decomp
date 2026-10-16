/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02041484 from projets/spider-man-web-of-shadows/src/donor/func_02041484.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndWaveArcInfo {
    u32 fileId : 24;
    u32 flags : 8;
} UnkSndWaveArcInfo;
extern void *func_0201a0bc(int index);
extern void *func_0201a334(u32 fileId);
extern int func_0201a63c(int waveArcNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_0201a8ac(u32 fileId, void *heap, BOOL addToArc);
extern void *func_0201a918(u32 fileId, void *heap, BOOL addToArc);
int func_0201a63c(int waveArcNo, u32 flags, void *heap, BOOL addToArc, void **pData) {
    UnkSndWaveArcInfo *info = func_0201a0bc(waveArcNo);
    void *data;

    if (info == 0) {
        return 5;
    }

    if (flags & 4) {
        if (info->flags & 1) {
            data = func_0201a918(info->fileId, heap, addToArc);
        } else {
            data = func_0201a8ac(info->fileId, heap, addToArc);
        }
        if (data == 0) {
            return 9;
        }
    } else {
        data = func_0201a334(info->fileId);
    }

    if (pData != 0) {
        *pData = data;
    }
    return 0;
}
extern void *func_0201a8ac(u32 fileId, void *heap, BOOL addToArc);
extern void *func_0201a918(u32 fileId, void *heap, BOOL addToArc);

/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* adxstm_Create from https://github.com/Yotona/twewy libs/cri/src/adx_stmc.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct {
    void (*ExecServer)();
    void (*EntryErrFunc)();
    int (*GetFileSize)();
    void (*unkC)();
    void *(*Open)(char *device_name, void *, int);
    void (*Close)(void *fd);
    int (*Seek)(void *fd, int offset, int whence);
    int (*Tell)(void *fd);
    int (*ReqRd)(void *fd, int len, void *buf);
    void (*unk24)();
    void (*StopTr)();
    int (*GetStat)(void *fd);
    int (*GetSctLen)();
    void (*SetSctLen)();
    int (*GetNumTr)();
    void (*unk3C)();
    void (*IsExistFile)();
    void (*unk44)();
    void (*unk48)();
    void (*unk4C)();
    void (*unk50)();
    void (*unk54)();
    void (*unk58)();
    void (*unk5C)();
    int (*OptFn1)();
    void (*unk64)();
} CVFSDevice;
typedef struct {
    CVFSDevice *device;
    void *fd;
} CVFSHandle;
typedef struct UUID {
    unsigned int data1;
    unsigned short data2;
    unsigned short data3;
    unsigned char data4[8];
} UUID;
typedef struct SJCK {
    char *data;
    int length;
} SJCK;
typedef struct SJ {
    struct _sj_vtable *vtable;
} SJ_OBJ;
typedef SJ_OBJ *SJ;
typedef struct _sj_vtable {
    void (*QueryInterface)();
    void (*AddRef)();
    void (*Release)();
    void (*Destroy)(SJ sj);
    UUID *(*GetUuid)(SJ sj);
    void (*Reset)(SJ sj);
    void (*GetChunk)(SJ sj, int id, int nbyte, SJCK *ck);
    void (*UngetChunk)(SJ sj, int id, SJCK *ck);
    void (*PutChunk)(SJ sj, int id, SJCK *ck);
    int (*GetNumData)(SJ sj, int id);
    int (*IsGetChunk)(SJ sj, int id, int nbyte, int *rbyte);
    void (*EntryErrFunc)(SJ sj, void (*func)(void *obj, int ecode), void *obj);
} _sj_vtable;
typedef struct {
    char used;
    char stat;
    char rdflg;
    char unk_03;
    SJ sj;
    CVFSHandle *fp;
    int fofst;
    long long fsize;
    int fnsct;
    int maxsize;
    int minsize;
    int reqsct;
    SJCK reqck;
    int rdsct;
    int esct;
    unsigned int tbyte;
    void (*eosfunc)(void *);
    void *eosobj;
    int unk_44;
    char pause;
    char unk_49;
    char unk_4A;
    char unk_4B;
    char unk_4C;
    char unk_4D;
    char unk_4E[0x2];
    int errcnt;
    char *filename;
    void *dir;
    int stpos;
    unsigned int unk_60;
} ADXSTM;
extern ADXSTM *func_020bae78(SJ sj, int offset);
ADXSTM *func_020bad1c(int arg0, int offset, int file_len, SJ sj);
ADXSTM *func_020badb8(int arg0, int offset, int file_len, SJ sj);
ADXSTM *func_020bae78(SJ sj, int offset) {
    ADXSTM *stm;

    if (offset < 0x100) {
        stm = func_020bad1c(0, 0, 0, sj);
    } else {
        stm = func_020badb8(0, 0, 0, sj);
    }
    return stm;
}

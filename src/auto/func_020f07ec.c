#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020f07ec(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020f0860
    cmn ip, r3, lsl #0x1
    bhs L_020f0874
L_020f0800:
    orrs ip, r3, r1
    bmi L_020f0830
    cmp r1, r3
    cmpeq r0, r2
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_020f081c:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_020f0830:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_020f0860:
    bne L_020f081c
    cmp r0, #0x0
    bhi L_020f081c
    cmn ip, r3, lsl #0x1
    blo L_020f0800
L_020f0874:
    bne L_020f081c
    cmp r2, #0x0
    bhi L_020f081c
    b L_020f0800
}
// clang-format on

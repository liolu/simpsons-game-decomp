#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020f09c4(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020f0a2c
    cmn ip, r3, lsl #0x1
    bhs L_020f0a40
L_020f09d8:
    orrs ip, r3, r1
    bmi L_020f0a08
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_020f09f4:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_020f0a08:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_020f0a2c:
    bne L_020f09f4
    cmp r0, #0x0
    bhi L_020f09f4
    cmn ip, r3, lsl #0x1
    blo L_020f09d8
L_020f0a40:
    bne L_020f09f4
    cmp r2, #0x0
    bhi L_020f09f4
    b L_020f09d8
}
// clang-format on

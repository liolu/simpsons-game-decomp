#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020f0a50(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020f0ab8
    cmn ip, r3, lsl #0x1
    bhs L_020f0acc
L_020f0a64:
    orrs ip, r3, r1
    bmi L_020f0a94
    cmp r1, r3
    cmpeq r0, r2
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_020f0a80:
    mov r0, #0x1
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_020f0a94:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_020f0ab8:
    bne L_020f0a80
    cmp r0, #0x0
    bhi L_020f0a80
    cmn ip, r3, lsl #0x1
    blo L_020f0a64
L_020f0acc:
    bne L_020f0a80
    cmp r2, #0x0
    bhi L_020f0a80
    b L_020f0a64
}
// clang-format on

#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020f0754(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020f07c8
    cmn ip, r3, lsl #0x1
    bhs L_020f07dc
L_020f0768:
    orrs ip, r3, r1
    bmi L_020f0798
    cmp r1, r3
    cmpeq r0, r2
    movhs r0, #0x1
    movlo r0, #0x0
    bx lr
L_020f0784:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_020f0798:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhs r0, #0x1
    movlo r0, #0x0
    bx lr
L_020f07c8:
    bne L_020f0784
    cmp r0, #0x0
    bhi L_020f0784
    cmn ip, r3, lsl #0x1
    blo L_020f0768
L_020f07dc:
    bne L_020f0784
    cmp r2, #0x0
    bhi L_020f0784
    b L_020f0768
}
// clang-format on

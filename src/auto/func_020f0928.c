#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020f0928(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020f09a0
    cmn ip, r3, lsl #0x1
    bhs L_020f09b4
L_020f093c:
    orrs ip, r3, r1
    bmi L_020f096c
    cmp r1, r3
    cmpeq r0, r2
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_020f0958:
    mov r0, #0x0
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_020f096c:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bne L_020f098c
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
L_020f098c:
    cmp r3, r1
    cmpeq r2, r0
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_020f09a0:
    bne L_020f0958
    cmp r0, #0x0
    bhi L_020f0958
    cmn ip, r3, lsl #0x1
    blo L_020f093c
L_020f09b4:
    bne L_020f0958
    cmp r2, #0x0
    bhi L_020f0958
    b L_020f093c
}
// clang-format on

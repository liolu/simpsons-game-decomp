#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020f0884(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020f0904
    cmn ip, r3, lsl #0x1
    bhs L_020f0918
L_020f0898:
    orrs ip, r3, r1
    bmi L_020f08cc
    cmp r1, r3
    cmpeq r0, r2
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_020f08b4:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_020f08cc:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bne L_020f08f0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    orr ip, ip, #0x40000000
    msr cpsr_f, ip
    bxeq lr
L_020f08f0:
    cmp r3, r1
    cmpeq r2, r0
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_020f0904:
    bne L_020f08b4
    cmp r0, #0x0
    bhi L_020f08b4
    cmn ip, r3, lsl #0x1
    blo L_020f0898
L_020f0918:
    bne L_020f08b4
    cmp r2, #0x0
    bhi L_020f08b4
    b L_020f0898
}
// clang-format on

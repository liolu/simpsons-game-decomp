#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020cd4ec();
extern void func_020cd4fc();
extern void r2();
extern char data_02153e8c[];
extern char data_02153e90[];
extern char data_02153e98[];
// clang-format off
asm void func_020cd648(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_02153e8c
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_020cd4ec
    ldr r1, =data_02153e90
    ldr r0, =data_02153e8c
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =data_02153e98
    blx r2
    bl func_020cd4fc
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on

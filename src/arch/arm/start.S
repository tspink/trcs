.syntax unified

.globl __trcs_start
__trcs_start:
    ldr sp, =__end_stack
	b trcs_boot

.data
__stack:
    .space 8192
__end_stack:
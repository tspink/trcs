/*
 * arch/arm/init.c
 * 
 * Copyright (C) Tom Spink 2014 <tspink@gmail.com>
 * All Rights Reserved
 */

#include <arch/init.h>
#include <arch/panic.h>
#include <arch/platform/cortex-m4.h>

void arch_cpu_init()
{
    unsigned int cpuid = *SCR_CPUID;

    if (cpuid != 0xFF) {
        arch_halt();
    }
    
    cortex_m4_init();
}

void arch_irq_init()
{
    
}

void arch_mem_init()
{
    platform_mem_init();
}

void arch_dev_init()
{
    platform_dev_init();
}

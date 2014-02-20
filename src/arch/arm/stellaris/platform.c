/*
 * arch/arm/stellaris/platform.c
 * 
 * Copyright (C) Tom Spink 2014 <tspink@gmail.com>
 * All Rights Reserved
 */

#include <arch/init.h>
#include <arch/platform/cortex-m4.h>
#include <arch/platform/stellaris.h>
#include <kernel/mm.h>
#include <kernel/printk.h>

void platform_mem_init()
{
    printk("stellaris: installing memory regions\n");
    mm_add_region(MEM_CODE_BASE, MEM_CODE_SIZE, MEM_REGION_TYPE_CODE, "code");
}

void platform_dev_init()
{
}

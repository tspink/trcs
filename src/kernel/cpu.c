/*
 * kernel/cpu.c
 * 
 * Copyright (C) Tom Spink 2014 <tspink@gmail.com>
 * All Rights Reserved
 */

#include <kernel/cpu.h>
#include <kernel/printk.h>
#include <arch/init.h>

void cpu_init()
{
    printk("cpu: init\n");
    arch_cpu_init();
}

/*
 * kernel/cpu.c
 * 
 * Copyright (C) Tom Spink 2014 <tspink@gmail.com>
 * All Rights Reserved
 */

#include <kernel/cpu.h>
#include <arch/init.h>

void cpu_init()
{
    arch_cpu_init();
}

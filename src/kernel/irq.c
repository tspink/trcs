/*
 * kernel/irq.c
 * 
 * Copyright (C) Tom Spink 2014 <tspink@gmail.com>
 * All Rights Reserved
 */

#include <kernel/irq.h>
#include <arch/init.h>

void irq_init()
{
    arch_irq_init();
}

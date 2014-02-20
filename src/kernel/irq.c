/*
 * kernel/irq.c
 * 
 * Copyright (C) Tom Spink 2014 <tspink@gmail.com>
 * All Rights Reserved
 */

#include <kernel/irq.h>
#include <kernel/printk.h>
#include <arch/init.h>

void irq_init()
{
    printk("irq: init\n");
    arch_irq_init();
}

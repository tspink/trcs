/*
 * init.c
 * 
 * Copyright (C) Tom Spink 2014 <tspink@gmail.com>
 * All Rights Reserved
 */
#include <kernel/printk.h>
#include <kernel/cpu.h>
#include <kernel/mm.h>
#include <kernel/irq.h>
#include <model/model.h>

void trcs_boot()
{
    printk("trcs: starting boot\n");
    
    // Initialise CPU
    cpu_init();
    
    // Initialise memory
    mm_init();

    // Initialise interrupts
    irq_init();
    
    // Load the model
    model_load();
}

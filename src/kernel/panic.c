#include <kernel/panic.h>
#include <kernel/printk.h>
#include <arch/panic.h>

void panic(const char *msg)
{
    for(;;);
}

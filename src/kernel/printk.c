#include <kernel/printk.h>
#include <lib/string.h>

void printk(const char *fmt, ...)
{
    va_list v;
    va_start(v, fmt);
    vprintk(fmt, v);
    va_end(v);
}

void vprintk(const char *fmt, va_list v)
{
    char buffer[256];
    vsnprintf(buffer, sizeof(buffer) - 1, fmt, v);
}

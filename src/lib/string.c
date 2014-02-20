#include <lib/string.h>

void memcpy(void *dest, void *src, unsigned int size)
{
    //
}

void strcpy(char *dest, const char *src)
{
    //
}

void strncpy(char *dest, const char *src, unsigned int size)
{
    //
}

int vsnprintf(char *dest, unsigned int size, const char *fmt, va_list v)
{
    if (!dest)
        return -1;
    
    if (size < 0)
        return -1;
    
    *dest = 0;
    return 0;
}

int vsprintf(char *dest, const char *fmt, va_list v)
{
    return vsnprintf(dest, 4096, fmt, v);
}

int snprintf(char *dest, unsigned int size, const char *fmt, ...)
{
    int rc;
    
    va_list v;
    va_start(v, fmt);
    rc = vsnprintf(dest, size, fmt, v);
    va_end(v);
    
    return rc;
}

int sprintf(char *dest, const char *fmt, ...)
{
    int rc;
    
    va_list v;
    va_start(v, fmt);
    rc = vsprintf(dest, fmt, v);
    va_end(v);
    
    return rc;
}

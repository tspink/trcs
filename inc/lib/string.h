/* 
 * File:   string.h
 * Author: spink
 *
 * Created on 19 February 2014, 18:38
 */

#ifndef STRING_H
#define	STRING_H

#include <stdarg.h>

extern void memcpy(void *dest, void *src, unsigned int size);
extern void strncpy(char *dest, const char *src, unsigned int size);
extern void strcpy(char *dest, const char *src);

extern int vsnprintf(char *dest, unsigned int size, const char *fmt, va_list v);
extern int vsprintf(char *dest, const char *fmt, va_list v);
extern int sprintf(char *dest, const char *fmt, ...);
extern int snprintf(char *dest, unsigned int size, const char *fmt, ...);

#endif	/* STRING_H */


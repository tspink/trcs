/* 
 * File:   printk.h
 * Author: spink
 *
 * Created on 19 February 2014, 08:19
 */

#ifndef PRINTK_H
#define	PRINTK_H

#include <stdarg.h>

extern void printk(const char *fmt, ...);
extern void vprintk(const char *fmt, va_list v);

#endif	/* PRINTK_H */


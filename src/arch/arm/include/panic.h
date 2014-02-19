/* 
 * File:   panic.h
 * Author: spink
 *
 * Created on 18 February 2014, 08:33
 */

#ifndef PANIC_H
#define	PANIC_H

static inline void arch_halt()
{
    for (;;);
}

#endif	/* PANIC_H */


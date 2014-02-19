/* 
 * File:   cortex-m4.h
 * Author: spink
 *
 * Created on 18 February 2014, 08:45
 */

#ifndef CORTEX_M4_H
#define	CORTEX_M4_H

extern void cortex_m4_init(void);

// Memory Regions

#define MEM_CODE_BASE           (unsigned long)0x00000000
#define MEM_CODE_SIZE           (unsigned int)0x20000000

#define MEM_SRAM_BASE           (unsigned long)0x20000000
#define MEM_SRAM_SIZE           (unsigned int)0x20000000

#define MEM_PERIPHERAL_BASE     (unsigned long)0x40000000
#define MEM_PERIPHERAL_SIZE     (unsigned int)0x20000000

#define MEM_EXT_RAM_BASE        (unsigned long)0x60000000
#define MEM_EXT_RAM_SIZE        (unsigned int)0x40000000

#define MEM_EXT_DEV_BASE        (unsigned long)0xA0000000
#define MEM_EXT_DEV_SIZE        (unsigned int)0x40000000

#define MEM_PPB_INT_BASE        (unsigned long)0xE0000000
#define MEM_PPB_INT_SIZE        (unsigned int)0x00040000

#define MEM_PPB_EXT_BASE        (unsigned long)0xE0040000
#define MEM_PPB_EXT_SIZE        (unsigned int)0x000c0000

#define MEM_SYSTEM_BASE        (unsigned long)0xE0100000
#define MEM_SYSTEM_SIZE        (unsigned int)0x1ff00000

// Registers
#define SCR_ACTLR           ((unsigned int *)(0xE000E008))
#define SCR_STCSR           ((unsigned int *)(0xE000E010))

#define SCR_CPUID           ((unsigned int *)(0xE000ED00))
#define SCR_ICSR            ((unsigned int *)(0xE000ED04))
#define SCR_VTOR            ((unsigned int *)(0xE000ED08))
#define SCR_SCR             ((unsigned int *)(0xE000ED10))
#define SCR_CCR             ((unsigned int *)(0xE000ED14))

#endif	/* CORTEX_M4_H */


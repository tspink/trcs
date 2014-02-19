#ifndef __INIT_H__
#define	__INIT_H__

extern void arch_cpu_init(void);
extern void arch_irq_init(void);
extern void arch_mem_init(void);
extern void arch_dev_init(void);

extern void platform_mem_init(void);
extern void platform_dev_init(void);

#endif


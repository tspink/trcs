/* 
 * File:   mm.h
 * Author: spink
 *
 * Created on 18 February 2014, 08:22
 */

#ifndef MM_H
#define	MM_H

enum mem_region_type {
    MEM_REGION_TYPE_NONE   = 0,
    MEM_REGION_TYPE_RSVD   = 1,
    MEM_REGION_TYPE_CODE   = 2,
    MEM_REGION_TYPE_DATA   = 3,
    MEM_REGION_TYPE_IO     = 4,
};

struct mem_region {
    unsigned int base;
    unsigned int size;
    enum mem_region_type type;
    const char *name;
};

extern void mm_init(void);
extern void mm_add_region(unsigned int base, unsigned int size, enum mem_region_type type, const char *name);

#endif	/* MM_H */


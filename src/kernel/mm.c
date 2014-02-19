#include <kernel/mm.h>
#include <kernel/panic.h>

static struct mem_region regions[8];
static int nr_regions;

void mm_add_region(unsigned int base, unsigned int size, enum mem_region_type type, const char *name)
{
    regions[nr_regions].base = base;
    regions[nr_regions].size = size;
    regions[nr_regions].type = type;
    regions[nr_regions].name = name;
    
    nr_regions++;
}

void mm_init()
{
    if (nr_regions == 0)
        panic("no memory regions");
}

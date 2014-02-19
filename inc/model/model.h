#ifndef __MODEL_H__
#define __MODEL_H__

typedef struct _loco_class {
	int id;
} loco_class_t;

typedef struct _loco {
	int id;
	loco_class_t *cl;
} loco_t;

struct _block;
typedef struct _blk_conn {
	int nr;
	struct _block *conns;
	int selected;
} blk_conn_t;

typedef struct _block {
	int id;
	blk_conn_t outs;
	blk_conn_t ins;
} block_t;

extern void model_load(void);

#endif
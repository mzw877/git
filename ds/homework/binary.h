#ifndef __BINARY_H
#define __BINARY_H

#include <dlist.h>

typedef dlisthead_t system_t;

int system_init(int size, system_t **s);

int system_push(system_t *s, const void *data);

int system_isempty(lstack_t *s);

int system_pop(system_t *s, void *data);

void system_destory(lstack_t *s);

#endif

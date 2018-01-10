#include <stdlib.h>
#include <binary.h>

int system_init(int size, system_t **s)
{
	return dlisthead_init(size, s);
}

int system_push(system_t *s, const void *data)
{
	return dlist_insert(s, data, INSERT_FRONT);
}

int system_isempty(lstack_t *s)
{
	return dlist_isempty(s);
}

static int __cmpfun(const void *data, const void *key)
{
	return 0;
}

int system_pop(system_t *s, void *data)
{
	return dlist_fetch(s, NULL, __cmpfun, data);
}

void system_destory(lstack_t *s){
	dlist_destuy(s);
}


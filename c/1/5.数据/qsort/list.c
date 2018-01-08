#include <stdlib.h>
#include <string.h>

#include "list.h"

int seqlist_init(int size, seqlist_t **l)
{
	seqlist_t *me = NULL;
	me = malloc(sizeof(seqlist_t));
	if(NULL == me)
		return -1;
	memset(me, '\0', sizeof(seqlist_t));

	me->arr = NULL;
	me->num = 0;
	me->size = size;

	*l = me;

	return 0;
}

int seqlist_insert(seqlist_t *l, const void *data)
{
	l->arr = realloc(l->arr, (l->num + 1) * l->size);
	if (NULL == l->arr)	
		return -1;
	memcpy((char *)l->arr + l->num *l->size, data, l->size);
	l->num ++;
	return 0;
}

void swap(void *data1, void *data2, int size)
{
	char *tmp = NULL;
	memcpy(tmp, data1, size);
	memcpy(data1, data2, size);
	memcpy(data2, tmp, size);
	free(tmp);
}

void myqsort(void *arr, int head, int tail, int size, \
		int (*cmp)(void *data1, void *data2))
{
	int sentry = head;
	int tmp1 = head;
	int tmp2 = tail;
	char *p = arr;
	while (head < tail)
	{
		while(sentry < tail&&cmp(p + sentry * size,\
					p + tail * size) < 0)
			tail--;
		if(cmp(p + sentry * size, p + tail * size) > 0)
		{
			swap(p + sentry * size, p + tail * size, size);
			sentry = tail;
			head++;
		}	
		while(head < sentry&&cmp(p + head * size,\
					p + sentry * size) < 0)
			head++;
		if(cmp(p + sentry * size, p + head * size) > 0)
		{
			swap(p + sentry * size, p + head * size, size);
			tail--;
		}
		if(tmp1 < sentry)
			myqsort(arr, tmp1, sentry, size, cmp);
		if(sentry < tmp2)
			myqsort(arr, sentry, tmp2, size, cmp);
	}
}

int find(void *arr,int head, int tail, int size, int *key, int (*cmp)(void *data1, void *data2))
{
	int tmp = (head + tail)/ 2;
	char *p = arr;
	int res = cmp(key, p + tmp * size);
	if (head < tail)
	{
		if (res < 0)
			find(arr, head, tmp, size, key, cmp);
		else if (res > 0)
			find(arr, tmp, tail, size, key, cmp);
		else
			return tmp;
	}
	return -1;
}

void *seqlist_search(const seqlist_t *l, const void *key, cmp_t cmp)
{
	for (int i = 0; i < l->num; i++)
	{
		if(!cmp((char *)l->arr + l->num * l->size, key))
			return l->arr + i * l->size;
	}
	return NULL;
}

int seqlist_delete(seqlist_t *l, const void *key, cmp_t cmp)
{
	void *s = NULL;
	int movesize = 0;
	s = seqlist_search(l, key, cmp);
	if (NULL == s)
		return -1;
	movesize = (char *)l->arr + l->size * l->num - (char *)s + l->size;
	memcpy(s, (char *)s + l->size, movesize);
	l->num--;
	l->arr = realloc(l->arr, l->num * l->size);

	return 0;
}

void seqlist_traval(const seqlist_t *l, print_t pri)
{
	pri(l);
}

void seqlist_destroy(seqlist_t *l)
{
	free(l);
}


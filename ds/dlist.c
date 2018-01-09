#include <string.h>
#include <stdlib.h>

#include <dlist.h>

int dlisthead_init(int size, dlisthead_t **l)
{
	dlisthead_t *h = NULL;

	h = malloc(sizeof(dlisthead_t));
	if(NULL == h) {
		*l = h;
		return -1;
	}
	memset(h, '\0',sizeof(dlisthead_t));

	h->head.prev = &h->head;
	h->head.next = &h->head;
	h->size = size;

	*l = h;

	return 0;
}

int dlist_insert(dlisthead_t *h, const void *data, insertway_t way)
{
	struct node_st *new = NULL;

	new = calloc(1,sizeof(*new)+ h->size);

	memcpy(new->data, data, h->size);

	if(way == FRONT)
	{
		new->next = &h->head;
		new->prev = h->head.prev;
		h->head.next = new;
		new->next->prev = new;
	}
	else if(way == TAIL)
	{
		new->next = &h->head;
		new->prev = h->head.prev;
		h->head.prev = new;
		new->prev->next = new;
	}
	else
	{
		free(new);
		return -1;
	}
	return 0;
}


static struct node_st *find_prev(dlisthead_t *h, const void *key, cmp_t cmp)
{
	struct node_st *p;
	for(p = &h->head; p->next != h->head.next; p = p->next)
	{
		if(!cmp(p->data, key))
			return p;
	}
	return NULL;
}


int dlist_delete(dlisthead_t *h, const void *key, cmp_t cmp)
{
	struct node_st *f = NULL, *c = NULL;

	f = find_prev(h, key, cmp);
	if(f == NULL)
		return -1;
	f->next->prev = f->prev;
	f->prev->next = f->next;
	f->prev = NULL;
	f->next = NULL;
	return 0;
}	


void dlist_traval(const dlisthead_t *h, print_t pri)
{
	struct node_st *now = NULL;
	for(now = h->head.next; &h->head != now; now = now->next)
		pri(now->data);	
}


void dlist_destroy(dlisthead_t * h)
{
	struct node_st *p = NULL;
	p = h->head.next;
	while(p != &h->head)
	{
		p = p->next;
		free(p->prev);
	}
	free(h);
}


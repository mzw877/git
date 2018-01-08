#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <dlist.h>

typedef struct {
	int id;
	char name[32];
}hhh;

int cmp_int(const void *data, const void *key)
{
	int d1 = ((hhh *)data)->id;
	int *d2 = (int *)key;
	return d1 - *d2;
}

void print_int(const void *data)
{
	int tmp = ((hhh *)data)->id;
	printf("%d\n",tmp);
}

int main(void)
{
	int arr[] = {1,5,6,7,3,4,2,9,8};
	char *name[] = {"zhangsan", "lisi", "wangwu", "zhaoliu", "zhouqi", "wuba", "zhengjiu", "hanyi", "zouer"};
	hhh h;
	dlisthead_t *l = NULL;
	int num = 7;
	dlisthead_init(sizeof(int), &l);
	if(NULL == l)
		return -1;
	for(int i = 0; i < sizeof(arr)/sizeof(*arr); i++)
	{
		h.id = arr[i];
		strcpy(h.name, name[i]);
		dlist_insert(l, &h, TAIL);	
	}

	dlist_traval(l, print_int);

	dlist_delete(l, &num, cmp_int);

	dlist_traval(l, print_int);

	dlist_destroy(l);
	exit (0);
}

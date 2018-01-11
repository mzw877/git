#include <stdlib.h>



//初始化队列
int queue_init(queue_t **l, int num, int size)
{
	queue_t *q;
	q = malloc(sizeof(queue_t));
	if(NULL == q)
		return -1;
	memset(q, '\0', sizeof(queue_t));
	q->start = calloc(num, size);
	if(NULL == q->start) {
		free(q);
		return -1;
	}
	q->size = size;
	q->num = num;
	q->head =q->tail = 0;

	*l = q;
	return 0;

}

//判断队列是否为空
int queue_isempty(const queue_t *l)
{
	return l->head == l->tail;
}

//判断队列是否满
int queue_isfull(const queue_t *l)
{
	return (l->tail + 1) % l->num == l->head;
}

//入队
int queue_en(queue_t *l, const void *data)
{
	if(queue_isfull(l))
		return -1;
	memcpy((char *)l->start + l->tail * l->size, data, l->size);
	l->tail = (l->tail + 1) % l->num;

	return 0;
}

//出队
int queue_de(queue_t *l, void *data)
{
	if(queue_isempty)
		return -1;
	memcpy(data, (chat *)l->strat + l->head * l->size, l->size);
	l->head = (l->head + 1) % l->num;

	return 0;
}

//释放
int queue_destroy(queue_t *l)
{
	free(l->start);
	free(l);
}



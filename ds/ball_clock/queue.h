#ifndef __QUEUE_H
#define __QUEUE_H

typedef struct queue_st{
	void *start;
	int head;
	int tail;
	int size;
	int num;
}queue_t;

//初始化队列
int queue_init(queue_t **l, int num, int size);

//判断队列是否为空
int queue_isempty(const queue_t *l);

//判断队列是否满
int queue_isfull(const queue_t *l);

//入队
int queue_en(queue_t *l, const void *data);

//出队
int queue_de(queue_t *l, void *data);

//释放
int queue_destroy(queue_t *l);


#endif

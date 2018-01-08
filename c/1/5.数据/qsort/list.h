#ifndef __LIST_H 
#define __LIST_H 

typedef struct{
	void *arr;
	int num;
	int size;
}seqlist_t;
//顺序表的参数

typedef int (*cmp_t)(const void *data, const void *key);
//比较函数

typedef void (*print_t)(const void *data);
//打印函数

typedef void (*get_t)(int num, void *arr);
//为数组赋值

int seqlist_init(int size, seqlist_t **l);
//开辟空间

int seqlist_insert(seqlist_t *l, const void *data);
//插入元素

void swap(void *data1, void *data2, int size);
//数组内两成员交换位置

void myqsort(void *arr, int head, int tail, int size, int (*cmp)(void *data1, void *data2));
//快速排序

int find(void *arr, int head, int tail, int size, int *key, int (*cmp)(void *data1, void *data2));
//二分法查找

void *seqlist_search(const seqlist_t *l, const void *key, cmp_t cmp);
//查找元素

int seqlist_delete(seqlist_t *l, const void *key, cmp_t cmp);
//删除元素

void seqlist_traval(const seqlist_t *l, print_t pri);
//遍历元素

void seqlist_destroy(seqlist_t *l);
//释放空间


#endif

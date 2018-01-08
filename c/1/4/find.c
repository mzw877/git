#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define NUM 20

void assi(int num, int *arr) //为数组遍历随机值
{

	srand(getpid());
	for (int i = 0; i < num; i++)
		*(arr + i) = rand()%100;
}

int cmp(void *data1, void *data2)  //比较两个int型数值的大小,返回差值
{
	int *d1 = data1;
	int *d2 = data2;
	return *d1 -*d2;
}

void swap(void *data1, void *data2, int size)  //实现数组中两个成员的交换
{
	char *tmp = NULL;
	tmp = malloc(size);
	memcpy(tmp, data1, size);
	memcpy(data1, data2, size);
	memcpy(data2, tmp, size);
	free(tmp);
}

void sort(void *arr, int num, int size, int (*cmp)(void *data1,void *data2))
/*
	快速排序	arr是数组首地址,num是数组成员个数,size是成员占字节个数,cmp对比两个成员的差值
*/
{
	int head = 0;
	int tail = num;
	int tmp = head;
	while (head < tail)
	{
		while(tmp < tail && cmp((arr + tmp * size), (arr + tail * size)) <= 0)
		{
			tail--;
		}
		if (cmp((arr + tmp * size), (arr + tail * size)) > 0)
		{
			swap((char *)arr + tmp * size, (char *)arr + tail * size, size);	
			tmp = tail;
			head++;
		}
		while(tmp > head && cmp((arr + tmp * size), (arr + head * size)) >= 0)
		{
			head++;
		}
		if (cmp((arr + tmp * size), (arr + head * size)) < 0)
		{
			swap((char *)arr + tmp * size, (char *)arr + head * size, size);	
			tmp = head;
			tail--;
		}
		
	}
	if (arr < (arr + tmp * size))
		sort(arr, tmp - 1, size, cmp);
	if ((arr + tmp * size) < (arr + num *size))
		sort((arr + (tmp + 1) * size), num - tmp - 1, size, cmp);
}

int find(void *arr, int head, int end, int size, int *key, int (*cmp)(void *data1,void *data2))
/*
	二分查找法		arr是数组首地址,head是首元素,end是尾元素,size是元素站字节个数,key是所要查找的元素,cmp是对比两个元素差值的函数
*/
{
	int tmp = (head + end) / 2;
	if (head == tmp||tmp == end)
		return -1;
	if(cmp((arr + tmp * size), key) > 0){
		find(arr, head, tmp, size, key, cmp);
	}
	else if(cmp((arr + tmp * size), key) < 0){
		find(arr, tmp, end, size, key, cmp);	
	}
	else if(cmp((arr + tmp * size), key) == 0 )
		return tmp;
}

int main (void)
{
	int arr[NUM];
	int key, tmp;
	assi(NUM, arr);	
	for(int i = 0; i < NUM; i++)
	{
		printf("%3d ",arr[i]);
		if((i + 1) % 10 == 0)
			printf("\n");
	}
	printf("\n");
	sort(arr, NUM - 1, sizeof(int), cmp);
	for(int i = 0; i < NUM; i++)
	{
		printf("%3d ",arr[i]);
		if((i + 1)% 10 == 0)
			printf("\n");
	}
	printf("请输入一个要查找的整形数\n");
	scanf("%d",&key);
	tmp = find(arr, 0, NUM, sizeof(int), &key, cmp);
	if(tmp >= 0)
		printf("您要查找的数字在数组的第%d个元素\n",tmp + 1);
	else
		printf("没有找到\n");

	exit (0);
}

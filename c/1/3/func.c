#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


static void swap2num(void *data1,void *data2,int size)
{
	char *tmp = NULL;
	tmp = malloc(sizeof(char *));

	memcpy(tmp, data1, size);
	memcpy(data1, data2, size);
	memcpy(data2, tmp, size);
	free(tmp);

}


void sort(void *arr,int num,int size,int (*cmp)(void *,void *))
{
	for(int i = 0; i < num; i++)
	{
		for(int j = i + 1; j < num; j++)
		{
			if(cmp((char *)arr +(i * size),(char *)arr +(j * size)) > 0)
				swap2num((char *)arr +(i * size),(char *)arr +(j * size),size);
		}
	}
}

static int cmp(void *data1, void *data2)
{
	int *d1 = (int *)data1;
	int *d2 = (int *)data2;

	return *d1 - *d2;
}


int main(void)
{
	int arr[10];
	srand(getpid());
	for(int i = 0; i < 10; i++)
	{
		arr[i] = rand()%100;
	}
	sort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(int), cmp);

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	exit (0);
}

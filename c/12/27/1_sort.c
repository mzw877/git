#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


#define NUM 10

int main (void)
{
	int arr[NUM];
	srand(getpid());
	for (int i = 0; i < NUM; i++)
	{
		arr[i] = rand() % 100;
		printf("数组第%d位为%d\n",i+1,arr[i]);
	}
#if 0  //冒泡排序
	for (int i = 0; i < NUM; i++)
	{
		for (int j = 1; j < NUM - i; j++)
		{
			if(arr[j-1] > arr[j])
			{
				arr[j] = arr[j] ^ arr[j - 1];
				arr[j - 1] = arr[j] ^ arr[j - 1];
				arr[j] = arr[j] ^ arr[j - 1];
			}
		}
	}
#endif

#if 0  //选择排序
	int min;
	int tmp;
	for (int i = 0; i < NUM; i++)
	{
		min = arr[i];
		for(int j = i + 1.; j < NUM; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				tmp = j;
			}
		}
		if(arr[i] != min)
		{
			arr[tmp] = arr[i];
			arr[i] = min;
		}
	}

#endif
#if 1
	int tmp;
	int j;
	for (int i = 1; i < NUM; i++)
	{
		j = i - 1;
		tmp = arr[i];
		while (tmp < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
	}
#endif
	printf("排序后:\n");
	for (int i = 0; i < NUM; i++)
	{
		printf("数组第%d位为%d\n",i+1,arr[i]);
	}



	exit (0);
}

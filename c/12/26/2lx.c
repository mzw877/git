#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#define NUM 20


int main(void)
{
	int arr[NUM];
	int j = NUM-1;
	srand(getpid());
	for (int i = 0; i < NUM; i++)
	{
		arr[i] = rand()%100;
	}
	for (int i = 0; i < NUM; i++)
	{
		if (arr[i] % 2&&i < j)
		{	
			
			do{
				arr[i] = arr[i] ^ arr[j];
				arr[j] = arr[i] ^ arr[j];
				arr[i] = arr[i] ^ arr[j];
				j--;
			}while(arr[i] % 2 != 0);
		}
		printf("NO.%2d:%2d\n",i+1,arr[i]);
	}
	




	exit(0);
}

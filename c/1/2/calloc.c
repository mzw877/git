#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int getcalloc(int **arr, int num)
{
	*arr = calloc(num, sizeof(int));
	if (NULL == *arr)
		return -1;
	srand(getpid());
	for (int i = 0; i < num; i++)
	{
		(*arr)[i] = rand();	
	
	}
	return 0;
}
int main (void)
{
	int *arr = NULL;
	getcalloc(&arr,10);
	for (int i = 0; i<10; i++)
	{
		printf("%d ",arr[i]);
	
	}
	printf("\n");
	exit (0);
}


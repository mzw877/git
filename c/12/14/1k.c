#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main(void)
{
	int arr[4][5]={};
	srand(getpid());	 
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			arr[i][j]=rand();
			printf("数组中arr[%d][%d]的之为%d\n",i,j,arr[i][j]);
		}
	}

	exit (0);
}

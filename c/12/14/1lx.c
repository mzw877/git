#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void ord(int *arr,int n);
void maxmin(int *arr,int *min,int *max,int n);
void getvalue(int *arr,int n);
int main (void)
{
	int arr[30]={};
	int n,max,min;
	n=30;
	getvalue(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("第%d个整型数为%d\n",i+1,arr[i]);
		
	}
	maxmin(arr,&min,&max,n);
	printf("该数组的最大值为%d,最小值为%d\n",max,min);
	ord(arr,n);
	printf("排序后该数组:\n");
	for(int i=0;i<n;i++)
	{
		printf("数组第%d个为%d\n",i+1,arr[i]);
	}
	exit (0);
}

void getvalue(int *arr,int n)
{
	srand(getpid());
	for(int i=0;i<n;i++)
	{
		*(arr+i)=rand()%1000;
	}
}
void maxmin(int *arr,int *min,int *max,int n)
{
	*min=*max=*arr;
	for(int i=0;i<n;i++)
	{
		if(*min>*(arr+i))
			*min=*(arr+i);
		else if(*max<*(arr+i))
			*max=*(arr+i);
	}
}
void ord(int *arr,int n)
{
	int tmp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(arr+i)>*(arr+j))
			{
				tmp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=tmp;
			}
		}
	}
}

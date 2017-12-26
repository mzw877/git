#include<stdio.h>
#include<stdlib.h>


int data(int x);
int main(void)
{
	int d,j;
	j=0;
	printf("三位数的素数有:\n");
	for(int i=100;i<1000;i++)
	{
		d=data(i);
		if(d==0)
		{	
			printf("%4d",i);
			j++;
			if(j%10==0)
				printf("\n");
		}
	}

	exit(0);
}

int data(int x)
{
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
			return 1;
	}
	return 0;
}

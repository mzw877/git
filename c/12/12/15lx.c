#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	int sj[100]={};
	srand(getpid());
	for(int i=0;i<100; )
	{
		sj[i]=rand()%1000;
		if(sj[i]>=100)
		{
		printf("第%d个自然数为%d\n",i+1,sj[i]);
		i++;
		}
	}
	for(int i=0;i<100;i++)
	{
		if(sj[i]%3==0&&sj[i]%5==0&&sj[i]%7==0)
			printf("第%d个自然数%d可以被3/5/7整除\n",i+1,sj[i]);
	}
		
	exit(0);
}

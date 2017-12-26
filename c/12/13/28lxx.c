#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	int sj[20]={};
	srand(getpid());
	for(int i=0;i<20;i++)
	{
		do{
			sj[i]=rand()%100;
		}while(sj[i]<10);
		printf("第%d个自然数为%d\n",i+1,sj[i]);
	}
	for(int i=0;i<20;i++)
	{
		for(int f=i+1,staging;f<20;f++)
		{
			if(sj[i]>sj[f])
			{
				staging=sj[i];
				sj[i]=sj[f];
				sj[f]=staging;
			}
		}
		printf("排序后第%d个自然数为%d\n",i+1,sj[i]);
	}
	printf("\n");
	exit (0);	
}

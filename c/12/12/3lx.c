#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int sj[20]={};
	int s=0,h;
	for(int i=0;i<20;i++)
	{
		printf("请输入一个数字:");
		scanf("%d",&sj[i]);
	}
	for(int i=0;i<20;i++)
	{
		if(sj[i]>0)
		{
			s++;
			h +=sj[i];	
		}
	}
	printf("共有%d个正数,它们的和为%d\n",s,h);
	exit(0);
}

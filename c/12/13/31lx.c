#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int sj[10]={};
	int pj,max,min;
	int max_num,min_num;
	pj=0;
	for(int i=0;i<10;i++)
	{
		printf("请输入%d号战士的身高:",i+1);
		scanf("%d",&sj[i]);
		pj +=sj[i];
	}
	max=min=pj /=10;
	printf("战士的平均身高为%d\n",pj);
	for(int i=0;i<10;i++)
	{
		if(sj[i]<pj)
			printf("%d号战士身高为%d,低于平均身高\n",i+1,sj[i]);
		if(sj[i]>pj)
			printf("%d号战士身高为%d,高于平均身高\n",i+1,sj[i]);
		if(sj[i]<min)
		{
			min=sj[i];
			min_num=i+1;
		}
		if(sj[i]>max)
		{
			max=sj[i];
			max_num=i+1;
		}
	}
	printf("%d号战士身高最低为%d\n%d号战士身高最高为%d\n",min_num,min,max_num,max);
	exit(0);
}

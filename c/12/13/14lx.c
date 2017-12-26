#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int sj[10]={};
	int gs[3]={};
	for(int i=0;i<10;i++)
	{
		printf("请输入一个数:");
		scanf("%d",&sj[i]);
		if(sj[i]>0)
			gs[1]++;
		if(sj[i]==0)
			gs[2]++;
		if(sj[i]<0)
			gs[3]++;
	}
	printf("正数有%d个,零有%d个,负数有%d个\n",gs[1],gs[2],gs[3]);

	exit(0);
}

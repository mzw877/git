#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int accept[10]={};
	int number,count;
	printf("请输入10个数字:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&accept[i]);
	}
	for(int i=0;i<10;i++)
		printf("整数%d为%d\n",i+1,accept[i]);
	printf("请输入number:");
	scanf("%d",&number);
	count=0;
	for(int i=0;i<10;i++)
	{
		if(number==accept[i])
		{
			printf("number在数组中的位置是%p\n",(accept+i));
			count++;
		}	
		else 
		{
			if(i==9&&count==0)
				printf("没有找到\n");
		}
	}
	exit (0);
}

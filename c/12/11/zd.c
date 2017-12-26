#include<stdio.h>
#include<stdlib.h>

int big(int a,int b);
int main(void)
{
	int a,b,c;
	printf("请输入两个数字：\n");
	scanf("%d%d",&a,&b);
	c=big(a,b);
	printf("最大值为%d\n",c);
	exit (0);
}

int big(int a,int b)
{
	if(a>b||a==b)
	{
		return a;
	}
	else
	{
		return b;
	}
}	

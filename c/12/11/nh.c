#include<stdio.h>
#include<stdlib.h>

int sum(int he);
int main(void)
{
	int a,b;
	printf("请输入一个数字：");
	scanf("%d",&a);
	b=sum(a);
	printf("和为%d\n",b);

	exit (0);
}

int sum(int he)
{	
	int b;
	for(b=he-1;b>0;b--)
		{
			he +=b;
		}
	return he;
}

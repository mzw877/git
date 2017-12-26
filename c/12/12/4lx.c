#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int a[5]={};
	int b[5]={};
	int i;
	for(i=0;i<5;i++)
	{
		printf("请输入一个整数:");
		scanf("%d",&a[i]);
	}
	printf("数组b各值为\n");
	for(int n=0;n<5;n++)
	{
		i--;
		b[n]=a[i];
		printf("%d ",b[n]);
	}
	printf("\n");

	exit(0);
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,i;
	printf("输入一个数字\n");
	scanf("%d",&a);
	b=a-1;
	while(b>1)
	{
		i=a%b;
printf("%d\n",i);
		if(i==0)
		{
			printf("该数字不为质数\n");
			exit (1);
		}
		b--;
	}
	printf ("该数字为质数\n");
	exit (0);		
}		

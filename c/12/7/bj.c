#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c;

	for(a=0;a<20;a++)
	{
		for(b=0;b<34;b++)
		{
			for(c=0;c<100;c++)
			{
					if(a+b+c==100&&(5*a)+(3*b)+(c/3)==100)
					{
						printf("公鸡有%d只，母鸡有%d只，雏鸡有%d只\n",a,b,c);
					}				
				
			}
		}
	}
	printf("有以上结果\n");

	exit(0);
}

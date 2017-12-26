#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int a,b;
	b=0;
	printf("有以下自然数\n");
	for(a=100;a<1000;a++)
	{
		if((a%10==6)&&(a%3==0))
		{
			if(a%5!=0)
			{
				printf("%d\n",a);
				b++;
			}
		}
	}
	printf("总共有%d个\n",b);
	exit (0);
}

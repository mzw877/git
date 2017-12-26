#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c;
	for(a=1;a<10;a++)
	{
		for(b=1;b<=a;b++)
		{
			c=a*b;
			printf("%d*%d=%d  ",a,b,c);
		}
		printf("\n");
	}

	exit(0);
}

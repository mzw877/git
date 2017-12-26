#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t;
		float a,b;
	t=0;
	a=b=100;
		do
		{
			a +=10;
			b *=1.05;
			t++;
		}while(a>=b);
	printf("%d年之后D2的投资额超过D1\nD1的投资额为%f\nD2的投资额为%f\n",t,a,b);
	exit (0);		
}		

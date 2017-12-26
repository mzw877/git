#include<stdio.h>
#include<stdlib.h>

int swap(int *a,int *b);
int main(void)
{
	int a,b;
	a=10;
	b=20;
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	exit(0);
}



int swap(int *a,int *b)
{
	int staging;
	staging=*a;
	*a=*b;
	*b=staging;
}

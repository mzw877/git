#include<stdio.h>
#include<stdlib.h>


int e(int *(*f));
int x(int *y);
int main(void)
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int *b=a;
	int *c=&b;

	printf("%d  %d  %d  %d \n",*(b+1),*(c+1),*b+1,*c+1);


	exit(0);
}


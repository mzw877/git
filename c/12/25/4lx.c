#include <stdio.h>
#include <stdlib.h>


int fibonacci(int n);
int main (void)
{
	int num;
	printf("要求得斐波那契数列的第几项：");
	scanf ("%d",&num);
	printf("斐波那契数列的第%d项为%d\n",num,fibonacci(num));
	exit(0);
}

int fibonacci(int n)
{
	n -= 1;
	int sum=1;
	int tmp=0;
	for(int i=0;i<n;i++){
		sum += tmp;
		tmp = sum -tmp;
	}
	return sum;
}

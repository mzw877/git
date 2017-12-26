#include <stdio.h>
#include <stdlib.h>


static int sum (int num);
static int fabonacci (int num);
int main (void)
{
	int n;
	printf ("请输入数字n求得前n项乘以及斐波那契数列的第n项：");
	scanf("%d",&n);
	printf ("前%d项乘为%d，斐波那契第%d项为%d\n",n,sum(n),n,fabonacci(n));
	exit (0);
}


static int sum (int num)
{
	if (num == 1)
		return 1;
	return num * sum(num - 1);
}

static int fabonacci (int num)
{
	if (num ==1 || num == 2)
			return 1;
	return fabonacci(num-1)+fabonacci(num-2);

}

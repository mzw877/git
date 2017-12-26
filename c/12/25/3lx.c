#include <stdio.h>
#include <stdlib.h>


int prime(int n);/*判断是否为素数；返回值1为真，0为假*/
int main (void)
{
	int num;
	do{
		printf("请输入一个数字判断是不是素数：");
		scanf("%d",&num);
	}while(num<0);
	if(prime(num))
		printf("%d为素数\n",num);
	else
		printf("%d不为素数\n",num);



	exit (0);
}


int prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(!(n % i))
			return 0;
	}
	return 1;
}

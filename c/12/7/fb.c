#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c;
	for(a=b=1,c=0;b<=40 ;b++)
{
printf("数列第%d个数字为：%d\n",b,a);
a +=c;
c=a-c;
}

	exit(0);
}

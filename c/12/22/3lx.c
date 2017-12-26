#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	int a,b;
	a=b=0;
	printf("请输入会员可后四位:");
	scanf("%d",&num);
	for(int i = 0;i < 4;i++)
	{
		a = num % 10;
		num /=10;
		b += a;
	}
	if(b>20)
		printf("恭喜您获得20元购物卷\n");

	exit(0);
}

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int num1,num2,h;
	printf("请输入两个整形数:");
	scanf("%d %d",&num1,&num2);
	h = 0;
	if(num1 > num2)
	{
		num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;
	}
	for(int i = num1;i<=num2;i++)
	{
		h += i;
	
	}
	printf("两者之间的和为%d\n",h);

	exit (0);
}

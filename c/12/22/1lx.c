#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num,h;
	printf("请输一个数字:");
	scanf("%d",&num);
	h=0;
	for(int i = 0;i <= num;i ++){
		h += i;

	
	}
	printf("前%d项的和为%d\n",num,h);



	exit(0);
}

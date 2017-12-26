#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=950,b;
	float c=3.0e-23,d;
	printf("输入水的跨脱数\n");
	scanf("%d",&b);
	d=(b*a)/c;
	printf("水分子数为:%f\n",d);
	
	exit(0);
}
		

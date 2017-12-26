#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int a,b,c;
	float s,m;
	printf("输入三角形的边长\n");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	m=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三角形的面积为%f\n",m);
	
	exit(0);
}
		

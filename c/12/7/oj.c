#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main()
{
	int a,b,g1,g2,h1,h2,R;
	float p1,p2;
	g1=g2=h1=h2=0;
	p1=p2=0;
	while(1)
	{
		printf("请输入数字（输入0为止）:");
		R=scanf("%d",&a);
		if(R !=0)
		{
			b=a%2;
			if(a==0)
				break;
			if(b==0)
			{
				g1++;
				h1 +=a;
			}
			else
			{
				g2++;
				h2 +=a;
			}
		}
		else
		{
			printf("输入错误\n");
			break;	
		}
	}
	if(g1>0)
		p1=h1/g1;
	if(g2>0)
		p2=h2/g2;
	printf("偶数个数为%d，平均数为%f\n奇数个数为%d，平均数为%f\n",g1,p1,g2,p2);
	exit(0);
}

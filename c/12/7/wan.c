#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main()
{
	int a,b,c,h,x,s;
	printf("需要输出几个完数：");
	scanf("%d",&x);
	c=0;
	for(a=1;a>=1;a++)
	{
		h=0;
		for(b=1;a>b;b++)
		{
			s=a%b;
			if(s==0)
			{
				h +=b;
				if(a<=2*b&&h==a)
				{
					c++;
					printf("第%d个完数是%d\n",c,a);
					if(c>=x)
						exit(1);
				}
			}
		}
	}

	exit(0);
}

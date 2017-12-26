#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main()
{
	int a,b,c,g,x,h1,h2;
	printf("需要输出几个水仙花数：");
	scanf("%d",&x);
	g=0;
	for(a=1;a<10;a++)
	{
		h1=h2=0;
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			{
				h1=(a*100)+(b*10)+c;
				h2=(a*a*a)+(b*b*b)+(c*c*c);
				if(h1==h2)
				{
					g++;
					printf("第%d个水仙花数是%d\n",g,h1);
					if(g>=x)
						exit(1);
				}
			}
		}
	}

	exit(0);
}

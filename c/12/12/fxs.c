#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	int s,t,n;
	for(n=1000;n<10000;n++)
	{
			t=n;
		for(s=0;t>0;)
		{
			s=t%10+s*10;
			t /=10;
			if(n*9==s)
			{
				printf("N是%d\n",n);
				return 0;
			}

		}
	}
	exit (0);
}

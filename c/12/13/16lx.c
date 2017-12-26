#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int s=0;
	for(int i=100;i<=200;i++)
	{
		for(int p=10;p<15;p++)
		{
			if(i==p*p)
			{
				s++;
				printf("第%d个完全平方数为%d\n",s,i);
			}
		}
	}
	exit(0);
}

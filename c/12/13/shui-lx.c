#include<stdio.h>
#include<stdlib.h>

int daff(int num);
int main(void)
{
	int right,num;
	num=0;
	for(int i=100;i<1000;i++)
	{
		right=daff(i);
		if(right==1)
		{
			num++;
			printf("第%d个水仙花数为%d\n",num,i);
			
		}
	}
	exit (0);
}

int daff(int num)
{
	int n[3];
	int s;
	s=num;
	for(int i=0;i<3;i++)
	{
		n[i]=num%10;
		num /=10;
	}
	if(s==(n[0]*n[0]*n[0])+(n[1]*n[1]*n[1])+(n[2]*n[2]*n[2]))
		return 1;
	else
		return 0;
}

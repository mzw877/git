#include<stdio.h>
#include<stdlib.h>


int rl(int x,int y);
int xq(int x,int y);
int main(void)
{
	int a,b,c,d,e;
	int x,y,z;
	printf("请输入月份\n");
	scanf("%d",&a);
	printf("请输入年份\n");
	scanf("%d",&b);
	c=rl(a,b);
	printf("该月份有%d天\n",c);
	printf(" 日 一 二 三 四 五 六 \n");
	d=((xq(a,b))+1)%7;
	for(z=1;z<=c; )
	{
		for(x=1;x<=7&&z<=c;x++)
		{
			if(x>=d||e>0)
			{
				printf(" %2d",z);
				z++;
			}
			else
			{
				printf("   ");
			}
		}
		e++;
		printf("\n");
	}
	exit (0);
}


int rl(int x,int y)
{
	switch(x)
	{
		case 2:
			{
				if(((y%4==0)&&(y%100!=0))||(y%400==0))
				{
					return 29;
				}
				else
				{
					return 28;

				}
			}
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
	}

}


int xq(int x,int y)
{
	int z,rq,t,r;
	rq=(365*(y-1990))+((y-1988)/4);
	for(t=1;t<x;t++)
	{
		r +=rl(t,y);
	}
	rq +=r;
	z=(rq%7)+1;
	return z;
}

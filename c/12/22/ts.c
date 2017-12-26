#include<stdio.h>
#include<stdlib.h>

int ys(int x,int y);
int ts(int x,int y,int z);
int main(void)
{
	int t,x,y,z;
	printf("请输入年、月、日\n");
	scanf("%d %d %d",&y,&x,&z);
	t=ts(x,y,z);
	printf("%d年%d月%d日是这年的第%d天\n",y,x,z,t);

	exit (0);
}

int ys(int x,int y)
{
	switch(x)
	{
		case 1:case 3:case 5:
		case 7:case 8:case 10:case 12:
			return 31;
		case 4:case 6:case 9:case 11:
			return 30;
		case 2:
			if(((y%4==0)&&(y%100!=0))||(y%400==0))
			{
				return 29;
			}
			else
			{
				return 28;
			}
		default:
			return -1;
	}

}



int ts(int x,int y,int z)
{
	int t,n;
	t=0;
	for(n=1;n<x;n++)
	{
		t +=ys(n,y);
	}
	t +=z;
	return t;
}



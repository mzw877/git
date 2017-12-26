#include <stdio.h>
#include <stdlib.h>


int leap(int year);
int days(int month,int year); 
int week(int year,int month,int day);
int main (void)
{
	int x,y,z;
	int a,b,c;
	printf("请依次输入年月日：\n");
	scanf("%d %d %d",&x,&y,&z);
	a = leap(x);
	if(a)
		printf("%d年为闰年\n",x);
	else
		printf("%d年不为闰年\n",x);
	b = days(y,x);
	printf("%d年%d月有%d天\n",x,y,b);
	c = week(x,y,z);
	printf("%d年%d月%d日为周%d\n",x,y,z,c);

	exit (0);
}


int leap(int year)   //判断是否为闰年 year为年份；返回值为1时为闰年
{
	if((year % 4 == 0&&year % 100 != 0)||year % 400 == 0)
		return 1;
	else
		return 0;
}

int days(int month,int year)    //判断这个月有多少天 month为月份，year为年份；返回值为此月天数
{
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 2:
			return (28 + leap(year));
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
	}
}

int week(int year,int month,int day) //判断星期几 year为年份，month为月份，day为日；返回值为周几
{
	int tmp=0;
	int month1;	
	for(month -= 1;month>0;month--)
	{
		tmp = days(month,year)+tmp;
	}
	for(year -= 1;year >= 1990;year--){
		for(month1= 12 ;month1 > 0;month1--)	
		{
			tmp = days(month1,year)+tmp;
		}
	}
	return ((tmp+day)%7);

}


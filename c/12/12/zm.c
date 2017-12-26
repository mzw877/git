#include<stdio.h>
#include<stdlib.h>

int zh(int x);
int main(void)
{
	char hh,hhh;
	printf("请输入一个字母:\n");
	scanf("%c",&hh);
	hhh=zh(hh);
	if(hhh==-1)
		printf("数错了%d\n",hhh);
	else
	{
		printf("就是它－＞%c\n",hhh);
	}
	exit (0);
}

int zh(int x)
{
	if(x<=90&&x>=65)
	{
		x +=32;
	}
	else
	{
		if(x>=97&&x<=122)
		{
			x -=32;
		}
		else
		{
			x=-1;
		}
	}
	return x;
}

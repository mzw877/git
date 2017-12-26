#include<stdio.h>
#include<stdlib.h>

int ns(int n);
int main(void)
{
	int x,y;
	printf("请输入一个不超过5位数的正整数:");
	scanf("%d",&x);
	y=ns(x);
	printf("%d的逆数为%d\n",x,y);

	exit (0);
}

int ns(int n)
{
	int a,b,c,d,e,x,v,s;
	v=0;
	a=n/10000;
	b=(n/1000)-(a*10);
	c=(n/100)-(a*100)-(b*10);
	d=(n/10)-(a*1000)-(b*100)-(c*10);
	e=n-(a*10000)-(b*1000)-(c*100)-(d*10);
	if(a==0)
	{
		v++;
		if(b==0)
		{
			v++;
			if(c==0)
			{
				v++;
				if(d==0)
					v++;
			}
		}
	}
	x=(e*10000)+(d*1000)+(c*100)+(b*10)+a;
	for(s=0;s<v;s++)
		x /=10;
	return x;
}

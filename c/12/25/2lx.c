#include <stdio.h>
#include <stdlib.h>

int party(int m,int n);
int main (void)
{
	int n,m;
	printf("请输入整形数m和n，求得m的n次方：\n");
	scanf("%d %d",&m,&n);
	printf("%d的%d次方为%d\n",m,n,party(m,n));
	exit(0);
}

int party(int m,int n)
{
	int i;
	for(i = 1;n > 0;n--)
	{
		i *= m;	
	}
	return i;
}

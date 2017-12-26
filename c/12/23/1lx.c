#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num,n;
	char ch;
	ch = '*';
	printf("请输入要打印等腰三角形的腰长：\n");
	scanf("%d",&num);
	n = 0;
	for(int i = 1;i <(num * 2 + 1);) {
		for(int j = num+n;j > 0;j--)
		{
			if(j-i-1<0)
				printf(" %c ",ch);
			else
				printf("   ");
		}
		n++;
		printf("\n");
		i += 2;
	}





	exit (0);
}

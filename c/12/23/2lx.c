#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num,tmp;
	printf("需要输出多少行字母：");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<=i;j++)	
		{	
			tmp = j%26;
			printf("%2c",tmp+65);	
		}	
		printf("\n");	
	}
	exit (0);
}

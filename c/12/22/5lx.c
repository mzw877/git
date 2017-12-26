#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int tao,t,s;
	for (tao = 1; ;tao ++)
	{
		s=tao;
		for(t = 9;t > 0;t --)
		{
			s = s / 2 - 1;
		}
		if(s == 1){
			printf("猴子第一天摘了%d个桃\n",tao);
			return 0;
		}
	}
	exit (0);
}

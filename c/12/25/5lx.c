#include <stdio.h>
#include <stdlib.h>


int combination(void);
int main (void)
{
	printf("1,2,3,4不重复的情况下组成三位数共可以组成%d个数值\n",combination());

	exit (0);
}

int combination(void)
{
	int num = 0;
	for(int a = 1;a < 5;a++){
		for(int b = 1;b < 5;b++){
			if(a != b){	
				for(int c = 1;c < 5;c++)
				{
					if(a != c&&b != c)
							num++;
				}
			}
		}
	}
	return num;
}

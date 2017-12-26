#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1,num2;
	for(num1=1;num1<10;num1++){
		for(num2=1;num2<=num1;num2++){
			printf(" %d*%d=%2d ",num2,num1,num1*num2);
		}
		printf("\n");
	}

	exit (0);
}

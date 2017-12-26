#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=10;
	int b=26;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换以后a=%d,b=%d\n",a,b);
	a |= (1u << 2);
	b &= ~(1u << 1);
	printf("交换以后a=%d,b=%d\n",a,b);
	exit (0);
}


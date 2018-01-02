#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
	char a[] = "hello world";
	char b[10]; 
	const char *q = a;

	strncpy(b,a,9);
	printf("%s\n",b);
	exit (0);
}

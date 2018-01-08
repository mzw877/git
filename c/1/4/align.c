#include <stdio.h>
#include <stdlib.h>

struct {
	int a;
	char b;
	long c;
	short d;
}aa;

int main (void)
{
	printf("%p %p %p %p\n", &aa.a, &aa.b, &aa.c, &aa.d);

	exit (0);
}

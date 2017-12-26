#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int staging;
	staging=a[0];
	for(int i=0;i<10;i++)
	{
		if(i<9)
			a[i]=a[i+1];
		else
			a[i]=staging;
		printf("a[%d]为%d\n",i,a[i]);

	}


	exit (0);
}

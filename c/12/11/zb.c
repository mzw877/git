#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b,c,d,e;
	a=5;
	for(b=0;b<10;)
	{
		b++;
		for(c=0;c<25;)
		{
			c++;
			for(d=0;d<50;)
			{
				d++;
				for(e=0;e<100 ;)
				{
					e++;
					if(100*a==(50*b)+(20*c)+(10*d)+e)
					{
						printf("需要50元%2d张,需要20元%2d张\n需要10元%2d张,需要 5元%2d张\n",b,c,d,e);
					}
				}
			}
		}
	}



	exit (0);
}

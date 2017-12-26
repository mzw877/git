#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int a,b,c,d,e,x;
	for(a=0;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			if(a==b)
			{
				for(c=0;c<=9;c++)
				{
					for(d=0;d<=0;d++)
					{
						for(e=0;e<=9;e++)
						{
							for(x=1;x<100;x++)
							{
								if(d==e&&x*x==(b*1000)+(c*100)+(d*10)+e)
								{
									printf("%d%d%d%d%d\n",a,b,c,d,e);
								}
							}
						}
					}
				}
			}
		}
		exit(0);

	}
}

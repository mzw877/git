#include <stdio.h>
#include <stdlib.h>

#define NUM 10

int main(void)
{
	int arr[NUM] = {};
	int left = 10;
	int tmp = 0;
	for ( ; left > 1; )
	{
		for (int i = 0; i < NUM; i++)
		{
			if (arr[i] == 0)
			{
				tmp++;
				if (tmp == 3)
				{
					arr[i] = 1;
					left--;
					tmp=0;
				}
			}
		}
	}
	for (int i = 0; i < NUM; i++)
	{
		if (arr[i] == 0)
			printf("%d\n", i+1);
	}




	exit(0);
}

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int arr[10];
	int num=0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 2; j < arr[i]; j++)
		{
			if (arr[i] == 2)
				break;
			if (arr[i]%j==0)
			{
				num++;
				break;
			}
		}
	}
	printf("%d\n", 10 - num);



	exit(0);
}

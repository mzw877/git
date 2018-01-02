#include <stdio.h>
#include <stdlib.h>

int read(int **p)		//读入整型数
{
	int tmp;
	int len = 0;
	int cnt = 1;
	*p = calloc(cnt, sizeof(int));
	while(1)
	{
		scanf("%d",&tmp);
		if (tmp == -1)
			return len;
		(*p)[len] = tmp;
		len++;
		cnt++;
		*p = realloc(*p, cnt * sizeof(int));
	}

}

int prime(int *p, int num)		//判断素数个数
{
	int number = num;
	for (int i = 0; i < num; i++)
	{
		if (p[i] <= 1)
			number--;
		for(int j = p[i]-1; j > 1; j--)
		{
			if (p[i] % j == 0)
			{
				number--;
				break;
			}
		}
	}
	return number;
}

int main(void)
{
	int *p = NULL;
	int num;
	num = read(&p);		//读入的数字个数
	num = prime(p, num);		//素数的个数
	printf("共有%d个素数\n",num);
	exit(0);
}

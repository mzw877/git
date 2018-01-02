#include <stdio.h>
#include <stdlib.h>

int mygets(char **p)
{
	int	len = 0;
	int cnt = 2;
	*p = calloc(cnt,sizeof(char));
	while(1)
	{
		(*p)[len] = getchar();
		if(NULL == *p)
			return -1;
		if((*p)[len] == '\n')
		{
			(*p)[len] = '\0';
			return 0;
		}
		*p = realloc(*p,cnt);
		len++;
		cnt++;
	}
}

int convert(char *arr)
{
	int i = 0;
	while (1)
	{
		if (arr[i] >= 'a'&&arr[i] <= 'z')
			arr[i] -= 'a' - 'A';
		else if (arr[i] >= 'A'&&arr[i] <= 'Z')
			arr[i] += 'a' - 'A';
		else if (arr[i] == '\0')
			break;
		i++;
	}
}

int main(void)
{
	char *p = NULL;
	mygets(&p);
	convert(p);
	puts(p);
	free(p);
	exit(0);
}



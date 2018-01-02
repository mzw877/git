#include <stdio.h>
#include <stdlib.h>
int mygets(char **p)
{
	char *q;
	int len = 0;
	int cnt =11; 
	q = *p;
	q = malloc(cnt);
	while(1)
	{
		
		q[len] = getchar();
		if(cnt >= 10&&q[len] != '\n')
		{
			q = realloc(q,len + 11);
			if (q == NULL)
				return -1;
			cnt -= 10;
		}
		else if(q[len] == '\n')
		{
			q[len] = '\0';
			break;
		}
		len++;
		cnt++;
	}
	*p = q;
}

int main(void)
{
	char *p = NULL;
	mygets(&p);
	puts(p);
	exit (0);
}


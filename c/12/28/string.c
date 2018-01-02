#include <stdio.h>
#include <string.h>


int mystrlen(const char *p);
char *mystrcpy(char *dest, const char *src);
char *mystrcat(char *dest, const char *src);
int mystrcmp(const char *s1, const char *s2);
char *mystrchr(char ch, const char *src);
char *mystrstr(char *s1,const char *s2);

int main(void)
{
	char arr[] = "helllo";
	const char brr[20];
	char crr[10];
	char *q = arr;
	const char *p = brr;
	int m,n;
	char *x;
	char *y;
	char *v;
	char *u;
	char ch;
	char *zl = crr;
	m = mystrlen(q);
	printf("函数长度为%d\n",m);
	x = mystrcpy(p,q);
	printf("复制后字符数组b各成员为%s\n",x);
	y = mystrcat(p,q);
	printf("合并后字符数组b各成员为%s\n",y);
	n = mystrcmp(p,q);
	printf("字符数组a与字符数组b的差值为%d\n",n);
	printf("请输入需要在数组a查找的字符:");
	scanf("%c",&ch);
	v = mystrchr(ch,q);
	if(v > 0)
		printf("%s\n",v);
	else
		printf("没有找到\n");
	printf("请输入需要在数组b查找的字符串:");
	scanf("%s",crr);
	u = mystrstr(zl,p);
	if(u >= 0)
		printf("%s\n",u);
	else
		printf("没有找到\n");
	return 0;
}

int mystrlen(const char *p)
{
	int i = 0;
	while(1)
	{	
		if(*(p + (i++)) == 0)
			break;	
	}
	return i + 1;
	
}

char *mystrcpy(char *dest, const char *src)
{
	int i = 0;
	while(1)
	{	
		*(dest + i) = *(src + i);
		if(*(src + (i++)) == 0)
			break;	
	}	
	return dest;
}


char *mystrcat(char *dest, const char *src)
{
	int i = 0;
	int n = 0;
	while(1)
	{	
		if(*(dest + (i++)) == 0)
			break;	
	}	
	while(1)
	{	
		*(dest + i + n -1) = *(src + n);
		if(*(src + (n++)) == 0)
			break;	
	}	

	return dest;
}

int mystrcmp(const char *s1, const char *s2)
{
	int i = 0;
	int poor;
	while(1)
	{	
		poor = *(s1 + i) - *(s2 + i);
		i++;
		if(poor != 0)
			break;	
	}	
	return poor;
}

char *mystrchr(char ch, const char *src)
{
	int i = 0;
	int num;
	num = mystrlen(src);
	while(i<num)
	{	
		if(*(src + i) == ch)
		{
			return src + i;
		}
		i++;
	}
		return -1;
}

char *mystrstr(char *s1,const char *s2)
{
	int i = 0;
	int n = 0;
	int num = 0;
	num = mystrlen(s2);
	while(i < num)
	{	
		if(*(s2 + i) == *(s1 + n))
		{	
			n++;
			i++;
			if(n > 0&&*(s1 + n) == 0)
				return s2 + i -n;
			else if(*(s2 + i) != *(s1 + n))
				i--;
	
		}
		else
		{
			i++;
			n = 0;
		}
	}
	return -1;
}


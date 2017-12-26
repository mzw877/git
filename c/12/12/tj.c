#include<stdio.h>
#include<stdlib.h>

char jc(char a);
int main(void)
{
	int w,x,y,z;
	char a,c;
	w=x=y=z=0;
	printf("输入一串字符:\n");
	while(1)
	{
		scanf("%c",&a);
		c=jc(a);
		switch(c)
		{
			case 1:
				w++;
				break;
			case 2:
				x++;
				break;
			case 3:
				y++;
				break;
			case 4:
				z++;
				break;
			default:
				break;
		}
		if(c==-1)
		{
			printf("英文字母有%d个，空格有%d个，数字有%d个，其他字符有%d个\n",w,x,y,z);
			return 0;
		}
	}
	exit (0);
}


char jc(char a)
{
	if((a<='z'&&a>='a')||(a<='Z'&&a>='A'))
	{
		return 1;
	}
	else
	{
		if(a==' ')
		{
			return 2;
		}
		else
		{
			if(a<='9'&&a>='0')
				return 3;
			else
				if(a=='\n')
					return -1;
				else
					return 4;
		}
	}
}

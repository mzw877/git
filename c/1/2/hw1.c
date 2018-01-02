#include <stdio.h>
#include <stdlib.h>


int number(char *arr,int *num);
int main(int argc,char **argv)
{
	char *p = NULL;
	int num1,num2;
	if (argc != 4)
	{
		printf("输入错误\n");
	}
	num1 = num2 = 0;
	number(argv[1],&num1);
	number(argv[3],&num2);
	if(*argv[2] == '+')
		printf("%d + %d = %d\n",num1,num2,num1+num2);	
	else if(*argv[2] == '-')
		printf("%d - %d = %d\n",num1,num2,num1-num2);	
	else if(*argv[2] == 'x')
		printf("%d * %d = %d\n",num1,num2,num1*num2);	
	else if(*argv[2] == '/')
		printf("%d / %d = %d\n",num1,num2,num1/num2);	
	exit(0);
}

int number(char *arr,int *num)
{
	int i = 0;
	while(1)
	{
		if(arr[i] >= '0'&&arr[i] <= '9')	
		{
			*num *= 10;
			*num += (arr[i] -48);		
		}
		else if(arr[i] == '\0')
			break;
		i++;
	}

}


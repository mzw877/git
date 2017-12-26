#include<stdio.h>
#include<stdlib.h>

int main()
{
	int b;	
	float a;
	printf("输入一个学生成绩\n");
	scanf("%f",&a);
	if(a<=100&&a>=0)
	{
		a=a/10;
		b=(int)a;
		printf("该学生的成绩为");
		switch(b)
		{
			case 10:
			case 9:
				printf("A\n");
				break;
			case 8:
				printf("B\n");
				break;
			case 7:
				printf("C\n");
				break;
			case 6:
				printf("D\n");
				break;

			default:
				printf("E\n");
				break;

		}
	}
	else
	{
		printf("输入错误\n");
	}
	exit (0);		
}		

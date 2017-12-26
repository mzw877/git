#include<stdio.h>
#include<stdlib.h>

int main()
{

	float a;
	printf("输入一个学生成绩\n");
	scanf("%f",&a);
	if(a>100||a<0)
	{
		printf("输入错误\n");
		exit(1);
	}
	else
	{
		if(a>=90)
		{
			printf("该学生成绩为A\n");
			exit(2);
		}
		else
		{
			if(a>=80)
			{
				printf("该学生成绩为B\n");
				exit(3);
			}
			else
			{
				if(a>=70)
				{
					printf("该学生成绩为C\n");
					exit(4);
				}
				else
				{
					if(a>=60)
					{
						printf("该学生成绩为D\n");
						exit(5);
					}
					else
					{
						printf("该学生成绩为E\n");
							exit(6);
					}
				}
			}
		}
	}
	exit (0);		
}		

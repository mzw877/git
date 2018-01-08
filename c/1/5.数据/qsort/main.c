#include <stdio.h>

#include "list.h"
#define NUM 20

typedef struct{
	char name[32];
	int gender;
	int year;
	int lan;
	int math;
}stu_su;

cmp_t cmp_char(const void *data, const void *key)
{
	return strcmp(((stu_su *)data)->name, (char *)key);
}

cmp_t cmp_int(const void *data, const void *key)
{
	int *d1 = ((stu_su *)data)->year;
	int *d2 = (int *)key;
	return *d1 - *d2;
}

print_t print_int(const void *data)
{
	int *tmp = (int *)data;
	for (int i = 0; i < NUM; i++)
	{
		printf(" %d ",tmp[i]);
		if ((i + 1)% 10 == 0)
			printf("\n");
	}
}

print_t print_stu_su(const void *data, int num)
{
	stu_su *tmp = data;
	printf(" 姓名				性别 年龄 语文成绩 数学成绩\n");
	for(int i = 0; i < num; i++)
	{
		printf(" %-28s %4d %4d %8d %8d\n", tmp->name, \
				tmp->year,tmp->lan, tmp->math);
	}
}

get_t getstu_su(void *arr)
{
	stu_su *p = arr;
	printf("请输入学生的名字\n");
	scanf("%s", p->name);
	printf("请输入学生的性别'1为男0为女'/年龄/语文成绩/数学成绩\n");
	scanf("%d %d %d %d", &p->gender, &p->year, &p->lan, &p->math);
}

int main (void)
{
	seqlist_t *l = NULL;
	stu_su a[1];
	seqlist_init(sizeof(stu_su), &l);
	int option = 0;
	int option_2 = 0;
	int num = 0;
	char key[32];
	void *ret = NULL;
	do{
		printf("1、插入新的学生\n\
2、查找学生信息\n\
3、按照姓名首字母排序\n\
4、按照语文成绩排序\n\
5、按照数学成绩排序\n\
6、按照年龄排序\n\
7、打印所有学生信息\n\
0、退出\n");
		scanf("%d", &option);
		switch(option)	
		{
			case 1:
				getstu_su(a);
				seqlist_insert(l, a);
				num++;
				break;
			case 2:
				printf("请输入要查找的学生姓名\n");
				scanf("%s", key);
				ret = seqlist_search(l, &key, cmp_char);
				if(ret != NULL)
					print_stu_su(ret, num);
				else
					printf("没有找到\n");
				break;
			case 3:
				myqsort(l, 0, num, sizeof(l), cmp_char);
				break;
			case 4:
				myqsort(l, 0, num, sizeof(l), cmp_int);	
				break;
			case 5:
				myqsort(l, 0, num, sizeof(l), cmp_int);	
				break;
			case 6:
				myqsort(l, 0, num, sizeof(l), cmp_int);	
				break;
			case 7:
				for(int i = 0; i < num; i++)
				print_stu_su(l->arr + sizeof(stu_su) * i, num - 1);
				break;
			default:
				return -1;
		}
	}while(option);
	exit (0);
}

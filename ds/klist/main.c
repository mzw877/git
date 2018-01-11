#include <stdio.h>
#include <stdlib.h>

#include "student.h"

int cmp_int(void *data, void *key)
{
	struct stu_st *p_st = data;
	int *d = key;
	return *d - p_st->id;
}

int main(void)
{
	LIST_HEAD(h);
	int option = 0;
	int key_id = 0;
	struct stu_st *stu = NULL;
	while(option != 9){
		switch(option){
			printf("************************************\n\
					*1.添加 2.删除 3.修改 4.查找 5.遍历*\n\
					*9.退出\n\
					************************************\n");
			scanf("%d",&option);
			case 1:
				stu_add(&h);
				break;
			case 2:
				printf("请输入要删除学生的id\n");
				scanf("%d",&key_id);
				stu_del(&h, &key_id, cmp_int);
				break;
			case 3:
				printf("请输入要修改学生的id\n");
				scanf("%d",&key_id);
				stu_amend(&h, &key_id, cmp_int);
				break;
			case 4:
				printf("请输入要查找学生的id\n");
				scanf("%d",&key_id);
				stu = stu_find(&h, &key_id, cmp_int);
				if(stu == NULL)
				{
					printf("没有找到\n");
					break;
				}
				printf("是否打印(1:是，2:否)\n");
				scanf("%d",&option);
				if(option == 1)
					printf("%d %s %s\n",stu->id,stu->name,&stu->tel + sizeof(stu->tel));
				break;
		}
	}

	exit(0);
}

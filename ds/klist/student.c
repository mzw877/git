#include <string.h>
#include <stdlib.h>

#include "list.h"
#include "student.h"


void __stu_add(struct stu_st *stu, struct list_head *l)
{
	printf("请输入学生的id号\n");
	scanf("%d",&stu->id);
	printf("请输入学生的名字\n");
	scanf("%s",&stu->name);
	printf("请输入学生的电话\n");
	scanf("%s"&(stu->tel + sizeof(stu->tel)));
	list_add(&stu->node, l);
}

int stu_add(struct list_head *l)
{
	struct stu_st *stu = NULL;
	stu = calloc(1, sizeof(*stu)+30);
	__stu_add(stu, l);
}


int stu_del(struct list_head *l, const void *key, cmp_t cmp)
{
	struct list_head *pos = NULL;
	struct stu_st *stu = NULL;
	stu = calloc(1, sizeof(*stu)+30);
	list_for_each(pos, &h){
		stu = list_entry(pos, struct stu_su, node);
		if(!cmp(stu, key)){
			list_del(&(stu->node));
			free(stu);
			return 0;
		}
	}
	return -1;
}

stu_st *stu_find(struct list_head *l, const void *key, cmp_t cmp)
{
	struct list_head *pos = NULL;
	struct stu_st *stu = NULL;
	stu = calloc(1, sizeof(*stu)+30);
	list_for_each(pos, &l){
		stu = list_entry(pos, struct stu_su, node);
		if(!cmp(stu, key)){
			return stu;
		}
	}
	return NULL;

}

int stu_amend(struct list_head *l, const void *key, cmp_t cmp)
{
	struct stu_st *stu = NULL;
	stu = stu_find(l, key, cmp);
	if(stu == NULL)
	{
		__stu_add(stu->node, l);
		return 0;
	}
	return -1;
}



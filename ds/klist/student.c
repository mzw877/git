#include <string.h>
#include <stdlib.h>

#include "list.h"

#define NAMESIZE 32

struct stu_st {
	int id;
	char name[NAMESIZE];
	struct list_head node;
	char *tel;
};

typedef int (*cmp_t)(void *data, void *key);

int stu_add(struct list_head *l)
{
	struct stu_st *stu = NULL;
	stu = calloc(1, sizeof(*stu)+30);
	printf("请输入学生的id号\n");
	scanf("%d",&stu->id);
	printf("请输入学生的名字\n");
	scanf("%s",&stu->name);
	printf("请输入学生的电话\n");
	scanf("%s"&(stu->tel + sizeof(stu->tel)));
	list_add(&stu->node, &h);
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


int stu_amend(struct list_head *l, const void *key, cmp_t cmp)
{
	struct list_head *pos = NULL;
	struct stu_st *stu = NULL;
	stu = calloc(1, sizeof(*stu)+30);
	list_for_each(pos, &h){
		stu = list_entry(pos, struct stu_su, node);
		if(!cmp(stu, key)){
			
			return 0;
		}
	}
	return -1;
}

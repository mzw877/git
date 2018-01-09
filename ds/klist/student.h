#ifndef __STUDENT_H
#define __STUDENT_H

#include "list.h"

#define NAMESIZE 32

struct stu_st {
	int id;
	char name[NAMESIZE];
	struct list_head node;
	char *tel;
};

typedef int (*cmp_t)(const void *data, const void *key);

void __stu_add(struct stu_st *stu, struct list_head *l);

int stu_add(struct list_head *l);

int stu_del(struct list_head *l, const void *key, cmp_t cmp);

stu_st *stu_find(struct list_head *l, const void *key, cmp_t cmp);

int stu_amend(struct list_head *l, const void *key, cmp_t cmp);

#endif

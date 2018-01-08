#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[32];
	int age;
	float height;
}stu;

typedef struct {
	stu su;
	float lan;
	float math;
}pup;

int main (void)
{
	pup arr[3];
	int j = 0;
	for(int i = 0; i < 3; i++){
		printf("请输入学生的名字\n");
#if 1
		while(1){
			scanf("%c", arr[i].su.name + j);
			if((arr[i].su.name)[j] == '\n'){
				(arr[i].su.name)[j] = '\0';
				j = 0;
				break;
			}
			j++;
		}
#endif
	//	scanf("%s",arr[i].su.name);
		printf("请输入学生的年龄/身高/语文成绩/数学成绩\n");
		scanf("%d %f %f %f",&arr[i].su.age, &arr[i].su.height, &arr[i].lan, &arr[i].math);

		while (getchar() != '\n')
			;
	}
	for(int i = 0; i < 3; i++){
		printf("%s %d %.2f %.2f %.2f\n",arr[i].su.name, arr[i].su.age, arr[i].su.height, arr[i].lan, arr[i].math);
	}
	return 0;
}

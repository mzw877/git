#include <stdio.h>
#include <stdlib.h>

int palindrome(int n); 
int main(void)
{
	int number;
	printf("请输入一个整形数：");
	scanf("%d",&number);
	if(palindrome(number))
		printf("该数值为回文整型数\n");
	else
		printf("该数值不为回文整型数\n");	

	exit (0);

}


int palindrome(int n)   //此函数判断整形数是否为回文整形数 n为读入数值  return返回值为1为真0为假
{
	int num1,num2,number,tmp;
	tmp=n;
	number=0;
	while(tmp>0){
		tmp /= 10;
		number++;
	}
	tmp = 1;
	num1=num2=n;
	for(int i = 1;i<number;i++)
	{
		tmp *=10;
	}
	for( ;number/2 > 0;number--)
	{
		if(num1 / tmp != num2 % 10)
			return 0;	
		num2 /= 10;
		num1 %= tmp;
		tmp /= 10;
	}
	return 1;
}

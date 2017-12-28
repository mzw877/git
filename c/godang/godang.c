#include <stdio.h>
#include <stdlib.h>

#define NUM 10

int class(int num);       //初始化棋盘
int print(int num);      //打印棋盘
int moves(int num,char *or);  //记录棋子
int jud(int num);     //判断是否胜利

char board[NUM][NUM];

int main (void)
{
	char a = '%';
	char b = 'O';
	int number = NUM * NUM;			//记录棋盘空格
	int x,y;					//记录棋子坐标
	int begin;

READY:
	class(NUM);

	while(number > 1)
	{
		print(NUM);	
		if(number % 2 == 0)
		{
			printf("请'%'方输入要下棋子的坐标\n");
			moves(NUM,&a);
			number--;
		}
		else
		{
			printf("请O方输入要下棋子的坐标\n");
			moves(NUM,&b);
			number--;
		}
		if (jud(NUM) != 0)
		{
			printf("%c方获胜\n",jud(NUM));
			printf("是否重新开始(输入1重新开始其他则结束)\n");
			scanf("%d",&begin);
			if (begin == 1)
			{
				number = NUM * NUM;
				goto READY;
			}
			else
			{
				break;
			}
		}
		if (number == 0)
		{
			printf("棋盘下满,和局\n");
			printf("是否重新开始(输入1重新开始其他则结束)\n");
			scanf("%d",&begin);
			if (begin == 1)
			{
				number = NUM * NUM;
				goto READY;
			}
			else
			{
				break;
			}

		}

	}

	exit(0);
}


int class(int num)
{
	for (int i = 0; i < NUM; i++) 
	{
		for (int j = 0; j < NUM; j++)
		{
			board[i][j]  = '+';
		}
	}
}	


int print(int num)
{
	for(int i = 0; i < NUM+1; i++)
		printf("%2d ",i);
	printf("\n");
	for (int i = 0; i < NUM; i++) 
	{
		printf("%2d ",i + 1);
		for (int j = 0; j < NUM; j++)
		{
			printf(" %c ",board[i][j]);
		}
		printf("\n");
	}
}


int moves(int num,char *or)
{
	int x,y;
	do{
		scanf("%d %d",&x,&y);
		x--;
		y--;
		if ((x < num&&x >= 0)&&(y <num&&y >= 0)&&\
				(board[x][y] != '%' && board[x][y] != 'O'))
		{
			board[x][y] = *or;
			break;
		}
		else
		{
			printf("请重新输入坐标:\n");
		}

	}while(1);
}

int jud(int num)
{
	int a,b,c,d;
	a = b = c = d = 1;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if ((board[i][j] != '+')&&(board[i][j] == board[i][j + 1]||\
					board[i][j] == board[i + 1][j]||\
					board[i][j] == board[i + 1][j + 1]||\
					board[i][j] == board[i + 1][j - 1]))
			{
				a = b = c = d = 1;
				for (int k = 2; k < 7; k++)
				{
					if (board[i][j] == board[i][j + k])
						a++;
					else if(board[i][j] == board[i + k][j])
						b++;
					else if(board[i][j] == board[i + k][j + k])
						c++;
					else if(board[i][j] == board[i + k][j - k])
						d++;
					else
						break;
				}
			}
			if (a == 4||b == 4||c == 4||d == 4)
			{
				printf("%d %d %d %d\n",a,b,c,d);
				return board[i][j];
			}
		}
	}
	return 0;
}

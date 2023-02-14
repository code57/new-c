#define _CRT_SECURE_NO_WARNINGS 1


#include "game1.h"


void gamemenu()
{
	printf("**************扫雷**************\n");
	printf("***********1.开始游戏***********\n");
	printf("***********0.退出游戏***********\n");
}

void game1()
{
	char board1[ROW][COL];
	char board2[ROW][COL];
	initboard1(board1, ROW, COL);//初始化,随机埋雷
	initboard2(board2, ROW, COL);//初始化，全部用*填充
	displayboard(board2, ROW, COL);
	displayboard(board1, ROW, COL);//展示
	int ret = 0;
	while (1)
	{
		int m = 0;
		int n = 0;
		printf("请输入扫雷坐标:>");
		scanf("%d%d", &m, &n);
		ret = open(board1, board2, m - 1, n - 1);
		system("cls");
		displayboard(board2, ROW, COL);//?????
		printf("\n");
		/*displayboard(board1, ROW, COL);*/
		if (ret != 1)
		{
			break;
		}
	}
	if (ret == 0)
	{
		printf("玩家输了\n\n");
		displayboard(board1, ROW, COL);
	}
	else
	{
		printf("玩家赢了\n\n");
	}
}



int main()
{

	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		
		gamemenu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game1();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}

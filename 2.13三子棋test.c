#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"


void gamemenu()
{
	printf("**************三子棋************\n");
	printf("***********1.开始游戏***********\n");
	printf("***********0.退出游戏***********\n");
}

void game3()
{
	char board[ROW][COL];
	initboard(board, ROW, COL);//初始化
	displayboard(board, ROW, COL);
	char ret = 0;
	while(1)
	{
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret=iswin(board, ROW, COL);
		if(ret != 0)
		{
			break;
		}
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret=iswin(board, ROW, COL);
		if (ret != 0)
		{
			break;
		}
	}
	if (ret = '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret = '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
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
		switch(input)
		{
		case 1:
			printf("开始游戏\n");
			game3();
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

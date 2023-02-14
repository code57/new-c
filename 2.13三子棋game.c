#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			printf(" %c ", board[x][y]);
			if (y < col - 1)
				printf("|");
			else
				printf("\n");

		}
		if(x<row-1)
		{
			for (y = 0; y < col; y++)
			{
				printf("---", board[x][y]);
				if (y < col - 1)
					printf("|");
				else
					printf("\n");

			}
		}
	
	}
	printf("\n");
}

void playermove(char board[ROW][COL], int row, int col)
{
	int m = 0;
	int n = 0;
	while(1)
	{
		printf("请玩家移动\n");
		scanf("%d%d", &m, &n);
		if (m >= 1 && m <= row && n >= 1 && n <= col)
		{
			if(board[m-1][n-1]==' ')
			{
				board[m - 1][n - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}


}

void computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑移动\n");
	while(1)
	{
		int num1 = rand() % row;
		int num2 = rand() % col;
		if (board[num1][num2]==' ')
			board[num1][num2] = '#';
			break;
		}
	} 
}

char iswin(char board[ROW][COL], int row, int col)
{
	int u = 0;
	for (u = 0; u < row; u++)
	{
		if (board[u][0] == board[u][1] && board[u][1] == board[u][2] && board[u][0] != ' ')
		{
			return board[u][0];
		}
	}

	for (u = 0; u < col; u++)
	{
		if (board[0][u] == board[1][u] && board[1][u] == board[2][u] && board[0][u] != ' ')
		{
			return board[0][u];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}

	int p = 0;
	int q = 0;
	for (p = 0; p < row; p++)
	{
		for (q = 0; q < row; q++)
		{
			if (board[p][q] == ' ')
			{
				return 0;
			}

		}

	}
	return 'Q';
}

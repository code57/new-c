#define _CRT_SECURE_NO_WARNINGS 1

#include "game1.h"




void initboard1(char board1[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board1[i][j] = '0';
		}
	}
	/*for (i = 0; i < row; i++)//调试用生成
	{
		board1[0][i] = '1';
	}*/




	int num = 0;
	while (1)
	{
		int num1 = rand() % row;
		int num2 = rand() % col;
		if (board1[num1][num2] == '0')
		{
			board1[num1][num2] = '1';
			num++;
			if(num==CUNT)
			{
				break;
			}
		}
	}
}
void initboard2(char board2[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board2[i][j] = '*';
		}
	}
}

void displayboard(char board2[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf(" %d", i);
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (0 == j)
			{
				printf(" %d", i+1);
			}
			printf(" %c", board2[i][j]);
		}
		printf("\n");
	}


}


int cal(char board1[ROW][COL], int row, int col)//计算该位置雷数
{
	int num = 0;
	int i = 0;
	int j = 0;
	for (i = row-1; i < row+2; i++)
	{
		for (j = col-1; j < col+2; j++)
		{
			if(i>=0 && i<ROW && j>=0 && j<COL)
			{
				if ('1' == board1[i][j])//区分好是1还是'1'
				{
					num++;
				}
			}
			
		}
		
	}
	return num;
}
int mn = 0;
int open(char board1[ROW][COL], char board2[ROW][COL], int row, int col)
{
	if (board1[row][col] == '1')//区分好是1还是'1'
	{
		return 0;
	}
	board2[row][col] = cal(board1, row, col) + 48;//利用ASCII让字符数组中输出数字
	
	if (cal(board1, row, col) == 0)
	{
		if (row-1 >= 0 && row-1 < ROW && col >= 0 && col < COL && board2[row-1][col] == '*')
		{
			open(board1, board2, row - 1, col);
		}
		if (row+1 >= 0 && row+1 < ROW && col >= 0 && col < COL && board2[row+1][col] == '*')
		{
			open(board1, board2, row + 1, col);
		}
		if (row >= 0 && row < ROW && col-1 >= 0 && col-1 < COL && board2[row][col-1] == '*')
		{
			open(board1, board2, row, col - 1);
		}
		if (row >= 0 && row < ROW && col+1 >= 0 && col+1 < COL && board2[row][col+1] == '*')
		{
			open(board1, board2, row, col + 1);
		}
	}
	mn++;
	if (mn == ROW * COL - CUNT+1)
	{
		return 2;
	}
	
	return 1;

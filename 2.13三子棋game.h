#pragma once//使一个文件不被包含多次
#include <stdio.h>
#include <stdlib.h>
#include <time.h>




#define ROW 3
#define COL 3

void initboard(char board[ROW][COL], int row, int col);//声明
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);

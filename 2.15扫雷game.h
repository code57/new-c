#pragma once//使一个文件不被包含多次
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROW 9
#define COL 9
#define CUNT 10


void initboard1(char board1[ROW][COL], int row, int col);
void initboard2(char board2[ROW][COL], int row, int col);
void displayboard(char board2[ROW][COL], int row, int col);
int cal(char board1[ROW][COL],int row, int col);
int open(char board1[ROW][COL], char board2[ROW][COL], int row, int col);

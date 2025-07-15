#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//显示的格式
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MINE_COUNT 20 //雷的数量

//初始化
void initBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void print(char board[ROWS][COLS], int row, int col);

//布置雷区
void SetMine(char board[ROWS][COLS], int row, int col);

//没有雷显示周围雷数
void s(char mine[ROWS][COLS], char show[ROWS][COLS], int  x, int y, int row, int col);

//排查雷区
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int  row, int col);
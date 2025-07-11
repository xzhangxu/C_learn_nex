#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>	

#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

// 打印棋盘	
void pr_board(char board[ROW][COL], int row, int col);

//玩家下棋
void playchess(char board[ROW][COL], int row, int col);

//电脑判断是否拦截
int pc_judge(char board[ROW][COL], int row, int col);

//电脑下棋 
void com_chess(char board[ROW][COL], int row, int col, int c);

//判断胜负
int judge(char board[ROW][COL], int row, int col);
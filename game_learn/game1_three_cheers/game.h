#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>	

#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

// ��ӡ����	
void pr_board(char board[ROW][COL], int row, int col);

//�������
void playchess(char board[ROW][COL], int row, int col);

//�����ж��Ƿ�����
int pc_judge(char board[ROW][COL], int row, int col);

//�������� 
void com_chess(char board[ROW][COL], int row, int col, int c);

//�ж�ʤ��
int judge(char board[ROW][COL], int row, int col);
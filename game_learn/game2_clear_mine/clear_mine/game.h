#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��ʾ�ĸ�ʽ
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define MINE_COUNT 20 //�׵�����

//��ʼ��
void initBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
void print(char board[ROWS][COLS], int row, int col);

//��������
void SetMine(char board[ROWS][COLS], int row, int col);

//û������ʾ��Χ����
void s(char mine[ROWS][COLS], char show[ROWS][COLS], int  x, int y, int row, int col);

//�Ų�����
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int  row, int col);
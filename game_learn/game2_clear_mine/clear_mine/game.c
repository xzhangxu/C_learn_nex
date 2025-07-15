#include"game.h"

//��ʼ��
void initBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


//��ӡ����
void print(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("-----ɨ����Ϸ-----\n");
	for(i=0;i<=row;i++)
		printf("%d ", i); //��ӡ�к�
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//��ӡ�������
		printf("%d ", i); //��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]); //��ӡ����
		}
		printf("\n"); //����
	}
	printf("-----ɨ����Ϸ-----\n");
}

//��������
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = MINE_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '1')
			continue;
		else
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//û������ʾ��Χ����
void s(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int row ,int col)
{
	/* 1. Խ���������� */
	if (x < 1 || x > row || y < 1 || y > col) return;
	/* 2. �Ѿ������Ͳ��ٴ��� */
	if (show[x][y] != '*') return;

	int cnt = 0;
	for (int i = x - 1; i <= x + 1; i++)
		for (int j = y - 1; j <= y + 1; j++)
			if (i >= 1 && i <= row && j >= 1 && j <= col &&mine[i][j] == '1')
				++cnt;

	show[x][y] = cnt  + '0';

	if (cnt == 0)  // ��Χû���ף������ݹ�չ��
	{
		for (int i = x - 1; i <= x + 1; i++)
			for (int j = y - 1; j <= y + 1; j++)
				if (i != x || j != y)
					s(mine, show, i, j, row, col);
	}
}

//// û������ʾ��Χ���������ݹ�չ��
//void s(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int row, int col)
//{
//	/* 1. Խ���������� */
//	if (x < 1 || x > row || y < 1 || y > col) return;
//	/* 2. �Ѿ������Ͳ��ٴ��� */
//	if (show[x][y] != '*') return;
//
//	/* 3. ͳ����Χ���� */
//	int cnt = 0;
//	for (int i = x - 1; i <= x + 1; ++i)
//		for (int j = y - 1; j <= y + 1; ++j)
//			if (i >= 1 && i <= row && j >= 1 && j <= col && mine[i][j] == '1')
//				++cnt;
//
//	/* 4. ������д����ʾ���� */
//	show[x][y] = cnt ? cnt + '0' : '0';
//
//	/* 5. �����Χû���ף���ݹ�չ����Χ 8 �� */
//	if (cnt == 0)
//	{
//		for (int i = x - 1; i <= x + 1; ++i)
//			for (int j = y - 1; j <= y + 1; ++j)
//				if (i != x || j != y)          // ���ظ������Լ�
//					s(mine, show, i, j, row, col);
//	}
//}

//�Ų�����
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int  row ,int col)
{
	int total = row * col - MINE_COUNT; // �ܸ�������ȥ�׵�����
	int opened = 0;                     // �ѷ���������

	while(1)
	{ 
		int x, y;
		printf("��������Ҫ�²���׵�λ��(�� ��): ");
		scanf_s("%d %d", &x, &y);

		if (x > row || x < 1 || y < 1 || y>col)
		{
			//��ֹ��������߽�
			printf("�����߽磬���������룡\n");
			continue;
		}

		//�ж��Ƿ��غ�
		if (show[x][y] != '*')
		{
			printf("�Ų���ˣ����������룡\n");
			continue;
		}
		//�ж��Ƿ�����
		if (mine[x][y] == '1')
		{
			printf("ը���ˣ�����\n");
			print(mine, row, col); //��ӡ����
			return; //��Ϸ����
		}

		//չ��
		s(mine, show, x, y, row, col);
		++opened; //�ѷ�����������1

		/* ʤ����⣺�򵥱������� */
		if (opened == total)
		{
			puts("��ϲ�㣬���׳ɹ���");
			print(mine, row, col);
			return;
		}
		print(show, row, col); //��ӡδ�Ų���
	}
}

//// �Ų�����
//void findmine(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col)
//{
//	int opened = 0;                     // �ѷ���������
//	int total = row * col - MINE_COUNT;
//
//	while (1)
//	{
//		int x, y;
//		printf("��������Ҫ�²���׵�λ��(�� ��): ");
//		if (scanf_s("%d %d", &x, &y) != 2)   // ���� scanf
//		{
//			puts("�����ʽ����");
//			while (getchar() != '\n');     // �����������
//			continue;
//		}
//
//		/* Խ���� */
//		if (x < 1 || x > row || y < 1 || y > col)
//		{
//			puts("����������������룡");
//			continue;
//		}
//
//		/* ���Ų��� */
//		if (show[x][y] != '*')
//		{
//			puts("�Ų���ˣ����������룡");
//			continue;
//		}
//
//		/* ���׼�� */
//		if (mine[x][y] == '1')
//		{
//			puts("ը���ˣ�����");
//			print(mine, row, col);
//			return;
//		}
//
//		/* չ�� */
//		s(mine, show, x, y, row, col);
//		++opened;
//
//		/* ʤ����⣺�򵥱������� */
//		if (opened == total)
//		{
//			puts("��ϲ�㣬���׳ɹ���");
//			print(mine, row, col);
//			return;
//		}
//		print(show, row, col);
//	}
//}
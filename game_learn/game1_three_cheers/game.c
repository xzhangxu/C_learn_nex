#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	//��ʼ����������Ϊ�ո�
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j]=' ';
		}
	}
}

// ��ӡ����
void pr_board(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i=0 ; i<row ; i++)
	{
		//��ӡ����
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		//��ӡ���� %c | %c | %c \n����
		printf("\n");
		//��ӡ�ָ���
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
				printf("--- ");
		}
		//��ӡ����--- --- ---\n����
		printf("\n");	
	}
}


//�������
void playchess(char board[ROW][COL],int row,int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("���������:>\n");
		scanf_s("%d%d", &x, &y);
		if (x <= ROW && y <= COL)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ�ã����������룡\n");
				continue;
			}
		}
		else
		{
			printf("���������룡\n");
			continue;
		}
	}
}

////��������
//void com_chess(char board[ROW][COL], int row, int col)
//{
//	//��ʼ��
//	int x = 0;
//	int y = 0;
//	while (1)
//	{
//		printf("��������:>\n");
//		x = rand() % row;
//		y = rand() % col;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '@';
//			break;
//		}
//		else
//		{
//			printf("��λ���ѱ�ռ�ã����������룡\n");
//			continue;
//		}
//	}
//}

//�����ж��Ƿ�����
int pc_judge(char board[ROW][COL], int row, int col)
{
	int count = 0; //������
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
			{
				//�ж���
				if (board[i][0] == board[i][1] && board[i][0] == '*')
				{
					count++;
					return count;
				}
				if (board[i][0] == board[i][2] && board[i][0] == '*')
				{
					count++;
					return count;
				}
				if (board[i][1] == board[i][2] && board[i][1] == '*')
				{
					count++;
					return count;
				}
				//�ж���
				if (board[0][j] == board[1][j] && board[0][j] == '*')
				{
					count++;
					return count;
				}
				if (board[0][j] == board[2][j] && board[0][j] == '*')
				{
					count++;
					return count;
				}
				if (board[1][j] == board[2][j] && board[1][j] == '*')
				{
					count++;
					return count;
				}
				//�ж϶Խ���
				if (board[0][0] == board[1][1] && board[0][0] == '*')
				{
					count++;
					return count;
				}
				if (board[0][0] == board[2][2] && board[0][0] == '*')
				{
					count++;
					return count;
				}
				if (board[1][1] == board[2][2] && board[1][1] == '*')
				{
					count++;
					return count;
				}
			}
		}
	}
}

//������������
void com_chess(char board[ROW][COL], int row, int col,int c)
{
	//��ʼ��
	int x = 0;
	int y = 0;
	printf("��������:>\n");
	while (1)
	{
		if (c == 1)
		{
			//��ʼ����
			int i = 0;
			int j = 0;
			for (i = 0; i < row; i++)
			{
				for (j = 0; j < col; j++)
				{
					if (board[i][j] == '*')
					{
						//�ж���
						if (board[i][0] == board[i][1]&& board[i][0] =='*')
						{
							board[i][2] = '@';
							return;
						}
						if (board[i][0] == board[i][2]&& board[i][0] == '*')
						{
							board[i][1] = '@';
							return;
						}
						if (board[i][1] == board[i][2] && board[i][1] == '*')
						{
							board[i][0] = '@';
							return;
						}
						//�ж���
						if (board[0][j] == board[1][j] && board[0][j] == '*')
						{
							board[2][j] = '@';
							return;
						}
						if (board[0][j] == board[2][j] && board[0][j] == '*')
						{
							board[1][j] = '@';
							return;
						}
						if (board[1][j] == board[2][j] && board[1][j] == '*')
						{
							board[0][j] = '@';
							return;
						}
						//�ж϶Խ���
						if (board[0][0] == board[1][1] && board[0][0] == '*')
						{
							board[2][2] = '@';
							return;
						}
						if (board[0][0] == board[2][2] && board[0][0] == '*')
						{
							board[1][1] = '@';
							return;
						}
						if (board[1][1] == board[2][2] && board[1][1] == '*')
						{
							board[2][2] = '@';
							return;
						}
					}
				}
			}
		}
		else
		{
			//�������
			printf("��������:>\n");
			x = rand() % row;
			y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y] = '@';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ�ã����������룡\n");
				continue;
			}
		}
	}
}

//�ж��Ƿ��ʤ
int judge(char board[ROW][COL],int row,int col)
{
	int count = 0; //������
	int i = 0;
	int j = 0;
	//�ж���
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1]&& board[i][0] == board[i][2]&& board[i][0] !=' ')
		{
			if (board[i][0] == '*')
			{
				printf("��һ�ʤ��\n");
				count++;
				break;
			}
			else
			{
				printf("���Ի�ʤ��\n");
				count++;
				break;
			}
		}
	}
	//�ж���
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[0][j] == board[2][j]&& board[0][j] !=' ')
		{
			if (board[0][j] == '*')
			{
				printf("��һ�ʤ��\n");
				count++;
				break;
			}
			else
			{
				printf("���Ի�ʤ��\n");
				count++;
				break;
			}
		}
	}
	//�ж϶Խ���
	if(board[0][0]==board[1][1]&& board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		if (board[0][0] == '*')
		{
			printf("��һ�ʤ��\n");
			count++;
		}	
		else
		{
			printf("���Ի�ʤ��\n");
			count++;
		}
	}
	if(board[0][2]== board[1][1]&& board[1][1]== board[2][0] && board[0][2] != ' ')
	{
		if (board[0][2] == '*')
		{
			printf("��һ�ʤ��\n");
			count++;	
		}
		else
		{
			printf("���Ի�ʤ��\n");
			count++;
		}
	}
	return count;
}
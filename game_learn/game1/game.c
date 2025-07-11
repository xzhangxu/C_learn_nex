#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	//初始化棋盘内容为空格
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j]=' ';
		}
	}
}

// 打印棋盘
void pr_board(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i=0 ; i<row ; i++)
	{
		//打印数据
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		//打印（“ %c | %c | %c \n”）
		printf("\n");
		//打印分割线
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
				printf("--- ");
		}
		//打印（“--- --- ---\n”）
		printf("\n");	
	}
}


//玩家下棋
void playchess(char board[ROW][COL],int row,int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请玩家下棋:>\n");
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
				printf("该位置已被占用，请重新输入！\n");
				continue;
			}
		}
		else
		{
			printf("请重新输入！\n");
			continue;
		}
	}
}

////电脑下棋
//void com_chess(char board[ROW][COL], int row, int col)
//{
//	//初始化
//	int x = 0;
//	int y = 0;
//	while (1)
//	{
//		printf("电脑下棋:>\n");
//		x = rand() % row;
//		y = rand() % col;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '@';
//			break;
//		}
//		else
//		{
//			printf("该位置已被占用，请重新输入！\n");
//			continue;
//		}
//	}
//}

//电脑判断是否拦截
int pc_judge(char board[ROW][COL], int row, int col)
{
	int count = 0; //计数器
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
			{
				//判断行
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
				//判断列
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
				//判断对角线
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

//超级电脑下棋
void com_chess(char board[ROW][COL], int row, int col,int c)
{
	//初始化
	int x = 0;
	int y = 0;
	printf("电脑下棋:>\n");
	while (1)
	{
		if (c == 1)
		{
			//开始拦截
			int i = 0;
			int j = 0;
			for (i = 0; i < row; i++)
			{
				for (j = 0; j < col; j++)
				{
					if (board[i][j] == '*')
					{
						//判断行
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
						//判断列
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
						//判断对角线
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
			//随机生成
			printf("电脑下棋:>\n");
			x = rand() % row;
			y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y] = '@';
				break;
			}
			else
			{
				printf("该位置已被占用，请重新输入！\n");
				continue;
			}
		}
	}
}

//判断是否获胜
int judge(char board[ROW][COL],int row,int col)
{
	int count = 0; //计数器
	int i = 0;
	int j = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1]&& board[i][0] == board[i][2]&& board[i][0] !=' ')
		{
			if (board[i][0] == '*')
			{
				printf("玩家获胜！\n");
				count++;
				break;
			}
			else
			{
				printf("电脑获胜！\n");
				count++;
				break;
			}
		}
	}
	//判断列
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[0][j] == board[2][j]&& board[0][j] !=' ')
		{
			if (board[0][j] == '*')
			{
				printf("玩家获胜！\n");
				count++;
				break;
			}
			else
			{
				printf("电脑获胜！\n");
				count++;
				break;
			}
		}
	}
	//判断对角线
	if(board[0][0]==board[1][1]&& board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		if (board[0][0] == '*')
		{
			printf("玩家获胜！\n");
			count++;
		}	
		else
		{
			printf("电脑获胜！\n");
			count++;
		}
	}
	if(board[0][2]== board[1][1]&& board[1][1]== board[2][0] && board[0][2] != ' ')
	{
		if (board[0][2] == '*')
		{
			printf("玩家获胜！\n");
			count++;	
		}
		else
		{
			printf("电脑获胜！\n");
			count++;
		}
	}
	return count;
}
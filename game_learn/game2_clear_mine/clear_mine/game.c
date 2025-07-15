#include"game.h"

//初始化
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


//打印棋盘
void print(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("-----扫雷游戏-----\n");
	for(i=0;i<=row;i++)
		printf("%d ", i); //打印列号
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//打印玩家输入
		printf("%d ", i); //打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]); //打印棋盘
		}
		printf("\n"); //换行
	}
	printf("-----扫雷游戏-----\n");
}

//布置雷区
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

//没有雷显示周围雷数
void s(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int row ,int col)
{
	/* 1. 越界立即返回 */
	if (x < 1 || x > row || y < 1 || y > col) return;
	/* 2. 已经翻开就不再处理 */
	if (show[x][y] != '*') return;

	int cnt = 0;
	for (int i = x - 1; i <= x + 1; i++)
		for (int j = y - 1; j <= y + 1; j++)
			if (i >= 1 && i <= row && j >= 1 && j <= col &&mine[i][j] == '1')
				++cnt;

	show[x][y] = cnt  + '0';

	if (cnt == 0)  // 周围没有雷，继续递归展开
	{
		for (int i = x - 1; i <= x + 1; i++)
			for (int j = y - 1; j <= y + 1; j++)
				if (i != x || j != y)
					s(mine, show, i, j, row, col);
	}
}

//// 没有雷显示周围雷数，并递归展开
//void s(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int row, int col)
//{
//	/* 1. 越界立即返回 */
//	if (x < 1 || x > row || y < 1 || y > col) return;
//	/* 2. 已经翻开就不再处理 */
//	if (show[x][y] != '*') return;
//
//	/* 3. 统计周围雷数 */
//	int cnt = 0;
//	for (int i = x - 1; i <= x + 1; ++i)
//		for (int j = y - 1; j <= y + 1; ++j)
//			if (i >= 1 && i <= row && j >= 1 && j <= col && mine[i][j] == '1')
//				++cnt;
//
//	/* 4. 把数字写到显示棋盘 */
//	show[x][y] = cnt ? cnt + '0' : '0';
//
//	/* 5. 如果周围没有雷，则递归展开周围 8 格 */
//	if (cnt == 0)
//	{
//		for (int i = x - 1; i <= x + 1; ++i)
//			for (int j = y - 1; j <= y + 1; ++j)
//				if (i != x || j != y)          // 不重复处理自己
//					s(mine, show, i, j, row, col);
//	}
//}

//排查雷区
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int  row ,int col)
{
	int total = row * col - MINE_COUNT; // 总格子数减去雷的数量
	int opened = 0;                     // 已翻开格子数

	while(1)
	{ 
		int x, y;
		printf("请输入你要猜测地雷的位置(行 列): ");
		scanf_s("%d %d", &x, &y);

		if (x > row || x < 1 || y < 1 || y>col)
		{
			//防止输出超过边界
			printf("超出边界，请重新输入！\n");
			continue;
		}

		//判断是否重合
		if (show[x][y] != '*')
		{
			printf("排查过了，请重新输入！\n");
			continue;
		}
		//判断是否有雷
		if (mine[x][y] == '1')
		{
			printf("炸死了！！！\n");
			print(mine, row, col); //打印雷区
			return; //游戏结束
		}

		//展开
		s(mine, show, x, y, row, col);
		++opened; //已翻开格子数加1

		/* 胜利检测：简单遍历计数 */
		if (opened == total)
		{
			puts("恭喜你，排雷成功！");
			print(mine, row, col);
			return;
		}
		print(show, row, col); //打印未排查区
	}
}

//// 排查雷区
//void findmine(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col)
//{
//	int opened = 0;                     // 已翻开格子数
//	int total = row * col - MINE_COUNT;
//
//	while (1)
//	{
//		int x, y;
//		printf("请输入你要猜测地雷的位置(行 列): ");
//		if (scanf_s("%d %d", &x, &y) != 2)   // 改用 scanf
//		{
//			puts("输入格式错误！");
//			while (getchar() != '\n');     // 清掉错误输入
//			continue;
//		}
//
//		/* 越界检查 */
//		if (x < 1 || x > row || y < 1 || y > col)
//		{
//			puts("输入错误，请重新输入！");
//			continue;
//		}
//
//		/* 已排查检查 */
//		if (show[x][y] != '*')
//		{
//			puts("排查过了，请重新输入！");
//			continue;
//		}
//
//		/* 踩雷检查 */
//		if (mine[x][y] == '1')
//		{
//			puts("炸死了！！！");
//			print(mine, row, col);
//			return;
//		}
//
//		/* 展开 */
//		s(mine, show, x, y, row, col);
//		++opened;
//
//		/* 胜利检测：简单遍历计数 */
//		if (opened == total)
//		{
//			puts("恭喜你，排雷成功！");
//			print(mine, row, col);
//			return;
//		}
//		print(show, row, col);
//	}
//}
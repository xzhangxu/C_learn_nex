#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("*********   1.play   *********\n");
	printf("*********   0.exit   *********\n");
	printf("******************************\n");
}

void game()
{
	char board[ROW][COL] = {0};
	// 初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘	
	pr_board(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		playchess(board, ROW, COL);
		pr_board(board, ROW, COL);
		//判断玩家是否获胜
		int p=judge(board, ROW, COL);
		if(p==1)
			break; //玩家获胜，退出循环
		//电脑判断是否拦截
		int c=pc_judge(board, ROW, COL);
		//电脑下棋
		com_chess(board, ROW, COL,c);
		pr_board(board, ROW, COL);
		//判断电脑是否获胜
		int q=judge(board, ROW, COL);
		if(q==1)
			break; //电脑获胜，退出循环
	}
}


int main()
{
	srand((unsigned int)time(NULL)); //设置随机种子
	int choice;
	do
	{
		menu();//打印菜单
		printf("请选择：>");
		scanf_s("%d", &choice);
		printf("\n");
		switch (choice)
		{
		case 1:
			printf("开始游戏！");
			printf("\n");
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("请再次输入\n");
			continue;

		}
	} while (choice);

	return 0;
}

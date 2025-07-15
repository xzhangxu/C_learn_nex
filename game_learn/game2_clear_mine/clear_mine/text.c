#include"game.h"

//打印菜单	
void menu()
{
	printf("******************************\n");
	printf("*********   1.play   *********\n");
	printf("*********   0.exit   *********\n");
	printf("******************************\n");
}

//游戏函数
void game()
{
	srand((unsigned int)time(NULL)); //设置随机种子
	char mine[ROWS][COLS] = { 0 }; //存放没有布置的雷区0
	char show[ROWS][COLS] = { 0 }; //存放没有排查的结果*
	printf("扫雷游戏开始！  \n");
	//存放未布置雷区初始化为0
	initBoard(mine , ROWS, COLS, '0');
	//存放没有排查的地方初始化为*
	initBoard(show , ROWS, COLS, '*');
	//显示
	//printf("雷区棋盘初始化：\n");
	//print(mine , ROW, COL);
	//printf("\n");
	printf("未排查区初始化：\n");
	print(show , ROW, COL);
	printf("\n");
	//布置雷区
	SetMine(mine, ROW, COL);
	print(mine, ROW, COL);
	//排查雷区
	findmine(mine,show, ROW, COL);
	// 这里可以添加游戏逻辑
}

int main()
{
	int choice;
	do
	{
		menu();// 显示菜单
		printf("请选择：>");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏！！\n");
			return;
		default:
			printf("请再次输入：\n");
			continue;
		}
		
	} while (1);
	return 0;
}
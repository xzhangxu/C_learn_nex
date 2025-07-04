//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h> // For time() and srand() functions	
//#ifdef _WIN32  
//#include<windows.h> // Windows-specific header for Sleep function  
//#else  
//#include<unistd.h> // POSIX-specific header for sleep function  
//#endif  
//#define _CRT_SECURE_NO_WARNINGS
//
//void sleep_a()//延时函数	
//{
//#ifdef _WIN32  
//	Sleep(3000); //休眠1秒钟	需要#include<unistd.h>头文件	// 在Windows系统上使用Sleep函数休眠10毫秒	
//#else  
//	sleep(1); // Sleep for 1 second on POSIX systems  // POSIX系统上休眠1秒钟	
//#endif  	
//}
//
//
//////习题1游戏：猜数字游戏	
////void menu()
////{
////	printf("**********************************\n");
////	printf("********       1.play     ********\n");
////	printf("********     2-9.exit     ********\n");
////	printf("**********************************\n");	
////}
//
////int main()
////{
////	int num = 0, guess = 0, count = 0;
////	num = rand() % 100 + 1; //产生1-100之间的随机数(用的是模)
////	printf("请猜一个1到100之间的数字：\n");
////	sleep_a(); //延时函数，休眠3秒钟
////	system("cls");
////
////	do//这个循环的作用是让用户可以多次玩游戏
////	{
////      srand((unsigned int)time(NULL)); //设置随机数种子，确保每次运行时产生相同的随机数
////		printf("请选择是否继续玩游戏（选择一个数字（1-9））\n");
////		menu();
////		int choice;
////		scanf_s(" %d", &choice); //注意前面的空格，防止读取到换行符
////		if (choice != 1)
////		{
////			break; //退出循环
////		}
////		do
////		{
////			scanf_s("%d", &guess);
////			count++;
////			if (guess > num)
////			{
////				printf("你猜的数字太大了，请再试一次：\n");
////			}
////			else if (guess < num)
////			{
////				printf("你猜的数字太小了，请再试一次：\n");
////			}
////			else
////			{
////				printf("恭喜你，猜对了！你总共猜了%d次。\n", count);
////			}
////		} while (guess != num); //循环直到猜对数字
////	} while (1); //无限循环，直到用户选择不再玩游戏
////	return 0;
////}
//
//
////int main()
////{
////	
////
////	//关机程序
////	char input[20] = { 0 };
////	system("shutdown -s -t 300");
////again:
////	printf("请在300s内输入i am pig，否则你的电脑将会关机\n");
////	scanf_s(" %s", input);
////	if (strcmp(input, "i am pig") == 0)
////	{
////		system("shutdown -a");
////		printf("多谢你的信任，关机取消！！");
////	}
////	else
////	{
////		goto again;
////	}
////
////	return 0;	
////}
//

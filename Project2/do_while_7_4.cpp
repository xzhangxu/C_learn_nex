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
//void sleep_a()//��ʱ����	
//{
//#ifdef _WIN32  
//	Sleep(3000); //����1����	��Ҫ#include<unistd.h>ͷ�ļ�	// ��Windowsϵͳ��ʹ��Sleep��������10����	
//#else  
//	sleep(1); // Sleep for 1 second on POSIX systems  // POSIXϵͳ������1����	
//#endif  	
//}
//
//
//////ϰ��1��Ϸ����������Ϸ	
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
////	num = rand() % 100 + 1; //����1-100֮��������(�õ���ģ)
////	printf("���һ��1��100֮������֣�\n");
////	sleep_a(); //��ʱ����������3����
////	system("cls");
////
////	do//���ѭ�������������û����Զ������Ϸ
////	{
////      srand((unsigned int)time(NULL)); //������������ӣ�ȷ��ÿ������ʱ������ͬ�������
////		printf("��ѡ���Ƿ��������Ϸ��ѡ��һ�����֣�1-9����\n");
////		menu();
////		int choice;
////		scanf_s(" %d", &choice); //ע��ǰ��Ŀո񣬷�ֹ��ȡ�����з�
////		if (choice != 1)
////		{
////			break; //�˳�ѭ��
////		}
////		do
////		{
////			scanf_s("%d", &guess);
////			count++;
////			if (guess > num)
////			{
////				printf("��µ�����̫���ˣ�������һ�Σ�\n");
////			}
////			else if (guess < num)
////			{
////				printf("��µ�����̫С�ˣ�������һ�Σ�\n");
////			}
////			else
////			{
////				printf("��ϲ�㣬�¶��ˣ����ܹ�����%d�Ρ�\n", count);
////			}
////		} while (guess != num); //ѭ��ֱ���¶�����
////	} while (1); //����ѭ����ֱ���û�ѡ��������Ϸ
////	return 0;
////}
//
//
////int main()
////{
////	
////
////	//�ػ�����
////	char input[20] = { 0 };
////	system("shutdown -s -t 300");
////again:
////	printf("����300s������i am pig��������ĵ��Խ���ػ�\n");
////	scanf_s(" %s", input);
////	if (strcmp(input, "i am pig") == 0)
////	{
////		system("shutdown -a");
////		printf("��л������Σ��ػ�ȡ������");
////	}
////	else
////	{
////		goto again;
////	}
////
////	return 0;	
////}
//

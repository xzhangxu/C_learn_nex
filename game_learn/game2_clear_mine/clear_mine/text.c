#include"game.h"

//��ӡ�˵�	
void menu()
{
	printf("******************************\n");
	printf("*********   1.play   *********\n");
	printf("*********   0.exit   *********\n");
	printf("******************************\n");
}

//��Ϸ����
void game()
{
	srand((unsigned int)time(NULL)); //�����������
	char mine[ROWS][COLS] = { 0 }; //���û�в��õ�����0
	char show[ROWS][COLS] = { 0 }; //���û���Ų�Ľ��*
	printf("ɨ����Ϸ��ʼ��  \n");
	//���δ����������ʼ��Ϊ0
	initBoard(mine , ROWS, COLS, '0');
	//���û���Ų�ĵط���ʼ��Ϊ*
	initBoard(show , ROWS, COLS, '*');
	//��ʾ
	//printf("�������̳�ʼ����\n");
	//print(mine , ROW, COL);
	//printf("\n");
	printf("δ�Ų�����ʼ����\n");
	print(show , ROW, COL);
	printf("\n");
	//��������
	SetMine(mine, ROW, COL);
	print(mine, ROW, COL);
	//�Ų�����
	findmine(mine,show, ROW, COL);
	// ������������Ϸ�߼�
}

int main()
{
	int choice;
	do
	{
		menu();// ��ʾ�˵�
		printf("��ѡ��>");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ����\n");
			return;
		default:
			printf("���ٴ����룺\n");
			continue;
		}
		
	} while (1);
	return 0;
}
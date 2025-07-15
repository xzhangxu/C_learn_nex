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
	// ��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����	
	pr_board(board, ROW, COL);
	while (1)
	{
		//�������
		playchess(board, ROW, COL);
		pr_board(board, ROW, COL);
		//�ж�����Ƿ��ʤ
		int p=judge(board, ROW, COL);
		if(p==1)
			break; //��һ�ʤ���˳�ѭ��
		//�����ж��Ƿ�����
		int c=pc_judge(board, ROW, COL);
		//��������
		com_chess(board, ROW, COL,c);
		pr_board(board, ROW, COL);
		//�жϵ����Ƿ��ʤ
		int q=judge(board, ROW, COL);
		if(q==1)
			break; //���Ի�ʤ���˳�ѭ��
	}
}


int main()
{
	srand((unsigned int)time(NULL)); //�����������
	int choice;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>");
		scanf_s("%d", &choice);
		printf("\n");
		switch (choice)
		{
		case 1:
			printf("��ʼ��Ϸ��");
			printf("\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("���ٴ�����\n");
			continue;

		}
	} while (choice);

	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h> // For time() and srand() functions	
#ifdef _WIN32  
#include<windows.h> // Windows-specific header for Sleep function  
#else  
#include<unistd.h> // POSIX-specific header for sleep function  
#endif  
#define _CRT_SECURE_NO_WARNINGS

void sleep_a()//��ʱ����	
{
#ifdef _WIN32  
	Sleep(3000); //����1����	��Ҫ#include<unistd.h>ͷ�ļ�	// ��Windowsϵͳ��ʹ��Sleep��������10����	
#else  
	sleep(1); // Sleep for 1 second on POSIX systems  // POSIXϵͳ������1����	
#endif  	
}


////��������
//void change(int* px, int* py)//��������	������ָ���ɽ�����ϵ��
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
////����
//int main()
//{
//	int a = 0, b = 0;	
//	scanf_s("%d %d", &a, &b);	\
//	printf("����ǰ�Ľ���ǣ�%d %d\n", a, b); 
//	change(&a, &b); //���ý���������������ǵ�ַ��
//	printf("������Ľ���ǣ�%d %d\n", a, b); //���������Ľ��
//
//	return 0;	
//}
//


////ϰ�⣺��ӡa-b�������
////������ֻ��һ�������������Լ���������
//int main()
//{ 
//	int a = 0, b = 0;
//	int z = 0; //������
//	scanf_s("%d %d", &a, &b);
//	while(a<b)
//	{
//		//is_prime(a); //����is_prime�������ж��Ƿ�������(������)
//		for (int i = 2; i < a; i++)//Ҳ������sqrt(a)���Ż���������������//��Ҫͷ�ļ�<math.h>	
//		{
//			if (a % i == 0)
//			{
//				z++;
//			}
//		}
//		if (z == 0)
//		{
//			printf("%d������\n ", a); //��������������
//		}
//		z = 0; //���ü�����
//		a++;
//	}
//	return  0;
//}



//ϰ��
int main()
{ 

	return  0;
}
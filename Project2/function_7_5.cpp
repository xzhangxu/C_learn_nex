//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////#include<time.h> // For time() and srand() functions	
////#ifdef _WIN32  
////#include<windows.h> // Windows-specific header for Sleep function  
////#else  
////#include<unistd.h> // POSIX-specific header for sleep function  
////#endif  
//#define _CRT_SECURE_NO_WARNINGS

//void sleep_a()//��ʱ����	
//{
//#ifdef _WIN32  
//	Sleep(3000); //����1����	��Ҫ#include<unistd.h>ͷ�ļ�	// ��Windowsϵͳ��ʹ��Sleep��������10����	
//#else  
//	sleep(1); // Sleep for 1 second on POSIX systems  // POSIXϵͳ������1����	
//#endif  	
//}


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


//
////ϰ�⣨��ӡ1000-2000��֮������꣩
// int year_s(int y)//�����޷���ֵ���޲���ʱ����void
// {
//	 //����һ���꣬���겻���꣬�İ���������	
//	 if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) //�ж�����
//	 {
//		 return 1;
//	 }
//	 else
//	{
//		 return 0;
//	 }
// }
//int main()
//{ 
//	int year = 0;
//	int count = 0; //������	
//	for(year=1000;year<=2000;year++)
//	{
//		if (year_s(year))
//		{
//			printf("%d ", year); //��������������
//			count++; //��������1
//		}
//	}
//	printf("\n�����ܹ���%d��\n", count); //������������
//	return  0;
//}


////ע��˼·��д����������������ܳ�����ȥд�Ӻ���	
//////���ֲ���
//static int binary_rearch(int arr[], int k, int sz) // ����������Ϊ��̬����
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int c = left + (right - left) / 2;//ÿ��ѭ������Ҫ���½������Ҫ������ѭ���ڲ�����c��ֵ
//		if (arr[c] > k)
//		{
//			right = c - 1;
//		}
//		else if (arr[c] < k)
//		{
//			left = c + 1;
//		}
//		else
//			return c;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	//           0 1 2 3
//	int k = 7; //��Ҫ���ҵ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˷����±�
//	//û�ҵ�����-1
//	int ret = binary_rearch(arr, k, sz);//��ʱ��arr��һ����ָ�룩��ַ��k����Ҫ���ҵ����֣�sz������Ĵ�С
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ���,�±��ǣ�");
//		printf("%d\n", ret);	
//	}
//	return 0;
//}



////ϰ��
//void ADD(int *p)
//{
//	*p = *p + 1;//(*p)++
//}
//
//int main()
//{
//	int num = 0;
//	ADD(&num);//c��num�ĵ�ַ	
//	printf("%d", num);
//	return 0; // Return 0 to indicate successful execution
//}



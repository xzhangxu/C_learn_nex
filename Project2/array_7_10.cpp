#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<time.h> // For time() and srand() functions	
//#ifdef _WIN32  
//#include<windows.h> // Windows-specific header for Sleep function  
//#else  
//#include<unistd.h> // POSIX-specific header for sleep function  
//#endif  
#define _CRT_SECURE_NO_WARNINGS


	//һά����
	//int arr[10] = { 1 , 2 , 3 };
	////[1 2 3 0 0 0 0 0 0 0]
	//int arr1[] = { 1,2,3 };
	////[1 2 3]
	//char raa2[10] = "abc";
	////[a b c \0]
	//char arr3[10] = {'a','b','c'};
	////[a b c]


	////��ά����
	//int arr[3][4] = { 1,2,3,4, 5,6,7,8, 9,10,11,12 };
	//int arr1[3][4] = { {1,2,3,4}, {5,6}, {9,10} };//���ಹ0
	////�п���ʡ�ԣ��в���ʡ��
 
 
//void bubble_sort(int* arr)//int arr[]//���鴫��
//{
//	for (int i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////ð�������㷨
// �β���ָ����ʽ
//void bubble_sort(int* arr,int sz)
//{
//	//����sz
//  int i = 0
//	for (; i < sz - 1; i++)
//	{
//		//һ����ô��
//		int j = 0
//		for (; j < sz - 1 - i; j++)
//		{
//			//����
//			int temp = 0;
//			if (arr[j]>arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	//����
//	int arr[10] = { 7,5,3,6,4,1,8,9,0,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //��������Ĵ�С
//
//	//���������
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////��λ�����������
//int main()
//{
////	int arr[3][4] = { 1,2,3,4, 5,6,7,8, 9,10,11,12 };
////	arr;//��ʾ��һ������ĵ�ַ
////	int sz = sizeof(arr)  ; //��������
////	int sz1 = sizeof(arr[0])/sizeof(arr[0][0]); //��������
////	printf("%d\n", sz); 
//	return 0;
//}


void pr_arr(int* arr) //��ӡ����
{
	int i;
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
		if (i % 3 == 2) //ÿ3��Ԫ�ػ���
		{
			printf("\n");
		}
	}
}

int main()
{
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	pr_arr(arr);

}
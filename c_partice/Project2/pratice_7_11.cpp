//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS


////�ַ������������Ǵ�ӡ(�ǵݹ�)
//void change(char* arr,int j)
//{
//	char temp = arr[j];
//	arr[j] = arr[j + 1];
//	arr[j + 1] = temp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//�ܼ���
//	int sz = sizeof(arr) / sizeof(arr[0])-1; //�����ַ������ȣ���ȥ'\0'�ַ�
//	int i = 0;
//	int j = 0;
//	for (; i < sz; i++)
//	{
//		//һ�˽�������
//		for (; j < sz - i-1; j++)
//		{
//			change(arr,j);
//		}
//		j = 0;
//	}
//	printf("%s\n", arr); //����������ַ���
//	return 0;
//}



////�ݹ�ʵ���ַ�����������(û�гɹ�)
//void change(char* arr, int j)
//{
//	char temp = arr[j];
//	arr[j] = arr[j + 1];
//	arr[j + 1] = temp;
//}
//void di(char* str, int sz2, int i)
//{
//	if (i < sz2)
//	{
//		change(str, i);
//		return di(str+1, sz2-1, i);
//	}
//	else
//	{
//		return;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//�ܼ���
//	int sz = sizeof(arr) / sizeof(arr[0])-1; //�����ַ������ȣ���ȥ'\0'�ַ�
//	int i = 0;
//	int j = 0;
//	for (; i < sz; i++)
//	{
//		//һ�˽�������
//		int sz2 = sz - i-1;
//		di(arr, sz2, i);
//	}
//	printf("%s\n", arr); //����������ַ���
//	return 0;
//}


//int DigitSum(int x)
//{
//	if (x / 10!=0)
//	{
//		return x % 10 + DigitSum(x / 10);
//	}
//	return x % 10;
//}
//int main()
//{
//	printf("%d",DigitSum(1729));
//	return 0;
//}



////����һ���������飬��ɶ�����Ĳ���
////ʵ��init()��ʼ������Ϊ0
////ʵ��print()��ӡ����
////ʵ��reverse()���������������
//void init(int* arr,int sz)
//{
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int* arr, int sz)
//{
//	int left = 0; //��߽�
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0}; //����һ����������
//	int sz = sizeof(arr) / sizeof(arr[0]); //�������鳤��
//
//	print(arr, sz);
//	printf("\n");
//	reverse(arr, sz); //��������
//	print(arr, sz); //��ӡ����������
//	printf("\n");
//	init(arr, sz);
//	print(arr, sz); //��ӡ����
//	printf("\n");
//
//	return 0;
//}
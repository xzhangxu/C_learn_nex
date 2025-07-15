//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS


////字符串逆序排序不是打印(非递归)
//void change(char* arr,int j)
//{
//	char temp = arr[j];
//	arr[j] = arr[j + 1];
//	arr[j + 1] = temp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//跑几趟
//	int sz = sizeof(arr) / sizeof(arr[0])-1; //计算字符串长度，减去'\0'字符
//	int i = 0;
//	int j = 0;
//	for (; i < sz; i++)
//	{
//		//一趟交换次数
//		for (; j < sz - i-1; j++)
//		{
//			change(arr,j);
//		}
//		j = 0;
//	}
//	printf("%s\n", arr); //输出逆序后的字符串
//	return 0;
//}



////递归实现字符串逆序排序(没有成功)
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
//	//跑几趟
//	int sz = sizeof(arr) / sizeof(arr[0])-1; //计算字符串长度，减去'\0'字符
//	int i = 0;
//	int j = 0;
//	for (; i < sz; i++)
//	{
//		//一趟交换次数
//		int sz2 = sz - i-1;
//		di(arr, sz2, i);
//	}
//	printf("%s\n", arr); //输出逆序后的字符串
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



////创建一个整形数组，完成对数组的操作
////实现init()初始化数组为0
////实现print()打印数组
////实现reverse()函数完成数组逆序
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
//	int left = 0; //左边界
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0}; //创建一个整形数组
//	int sz = sizeof(arr) / sizeof(arr[0]); //计算数组长度
//
//	print(arr, sz);
//	printf("\n");
//	reverse(arr, sz); //逆序数组
//	print(arr, sz); //打印逆序后的数组
//	printf("\n");
//	init(arr, sz);
//	print(arr, sz); //打印数组
//	printf("\n");
//
//	return 0;
//}
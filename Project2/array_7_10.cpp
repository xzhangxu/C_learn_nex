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


	//一维数组
	//int arr[10] = { 1 , 2 , 3 };
	////[1 2 3 0 0 0 0 0 0 0]
	//int arr1[] = { 1,2,3 };
	////[1 2 3]
	//char raa2[10] = "abc";
	////[a b c \0]
	//char arr3[10] = {'a','b','c'};
	////[a b c]


	////二维数组
	//int arr[3][4] = { 1,2,3,4, 5,6,7,8, 9,10,11,12 };
	//int arr1[3][4] = { {1,2,3,4}, {5,6}, {9,10} };//其余补0
	////行可以省略，列不能省略
 
 
//void bubble_sort(int* arr)//int arr[]//数组传参
//{
//	for (int i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////冒泡排序算法
// 形参是指针形式
//void bubble_sort(int* arr,int sz)
//{
//	//趟数sz
//  int i = 0
//	for (; i < sz - 1; i++)
//	{
//		//一趟怎么走
//		int j = 0
//		for (; j < sz - 1 - i; j++)
//		{
//			//交换
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
//	//数组
//	int arr[10] = { 7,5,3,6,4,1,8,9,0,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //计算数组的大小
//
//	//排序成升序
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////二位数组名的理解
//int main()
//{
////	int arr[3][4] = { 1,2,3,4, 5,6,7,8, 9,10,11,12 };
////	arr;//表示第一行数组的地址
////	int sz = sizeof(arr)  ; //计算行数
////	int sz1 = sizeof(arr[0])/sizeof(arr[0][0]); //计算列数
////	printf("%d\n", sz); 
//	return 0;
//}


void pr_arr(int* arr) //打印数组
{
	int i;
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
		if (i % 3 == 2) //每3个元素换行
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
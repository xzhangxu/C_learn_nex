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

//void sleep_a()//延时函数	
//{
//#ifdef _WIN32  
//	Sleep(3000); //休眠1秒钟	需要#include<unistd.h>头文件	// 在Windows系统上使用Sleep函数休眠10毫秒	
//#else  
//	sleep(1); // Sleep for 1 second on POSIX systems  // POSIX系统上休眠1秒钟	
//#endif  	
//}


////交换函数
//void change(int* px, int* py)//交换函数	（利用指针便可建立联系）
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
////函数
//int main()
//{
//	int a = 0, b = 0;	
//	scanf_s("%d %d", &a, &b);	\
//	printf("交换前的结果是：%d %d\n", a, b); 
//	change(&a, &b); //调用交换函数（传入的是地址）
//	printf("交换后的结果是：%d %d\n", a, b); //输出交换后的结果
//
//	return 0;	
//}
//


////习题：打印a-b间的素数
////素数（只有一和他本身是他自己的因数）
//int main()
//{ 
//	int a = 0, b = 0;
//	int z = 0; //计数器
//	scanf_s("%d %d", &a, &b);
//	while(a<b)
//	{
//		//is_prime(a); //调用is_prime函数来判断是否是素数(更容易)
//		for (int i = 2; i < a; i++)//也可以用sqrt(a)来优化，缩减计算力量//需要头文件<math.h>	
//		{
//			if (a % i == 0)
//			{
//				z++;
//			}
//		}
//		if (z == 0)
//		{
//			printf("%d是素数\n ", a); //如果是素数则输出
//		}
//		z = 0; //重置计数器
//		a++;
//	}
//	return  0;
//}


//
////习题（打印1000-2000年之间的闰年）
// int year_s(int y)//函数无返回值，无参数时候用void
// {
//	 //四年一闰年，百年不闰年，四百年再闰年	
//	 if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) //判断闰年
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
//	int count = 0; //计数器	
//	for(year=1000;year<=2000;year++)
//	{
//		if (year_s(year))
//		{
//			printf("%d ", year); //如果是闰年则输出
//			count++; //计数器加1
//		}
//	}
//	printf("\n闰年总共有%d个\n", count); //输出闰年的总数
//	return  0;
//}


////注意思路先写主函数，主函数框架出来再去写子函数	
//////二分查找
//static int binary_rearch(int arr[], int k, int sz) // 将函数声明为静态函数
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int c = left + (right - left) / 2;//每次循环都需要更新结果，不要忘了在循环内部更新c的值
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
//	int k = 7; //需要查找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了返回下标
//	//没找到返回-1
//	int ret = binary_rearch(arr, k, sz);//此时的arr是一个（指针）地址，k是需要查找的数字，sz是数组的大小
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了,下标是：");
//		printf("%d\n", ret);	
//	}
//	return 0;
//}



////习题
//void ADD(int *p)
//{
//	*p = *p + 1;//(*p)++
//}
//
//int main()
//{
//	int num = 0;
//	ADD(&num);//c传num的地址	
//	printf("%d", num);
//	return 0; // Return 0 to indicate successful execution
//}



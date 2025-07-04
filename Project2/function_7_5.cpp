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

void sleep_a()//延时函数	
{
#ifdef _WIN32  
	Sleep(3000); //休眠1秒钟	需要#include<unistd.h>头文件	// 在Windows系统上使用Sleep函数休眠10毫秒	
#else  
	sleep(1); // Sleep for 1 second on POSIX systems  // POSIX系统上休眠1秒钟	
#endif  	
}


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



//习题
int main()
{ 

	return  0;
}
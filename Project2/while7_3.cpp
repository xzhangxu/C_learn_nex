//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////#ifdef _WIN32  
////#include<windows.h> // Windows-specific header for Sleep function  
////#else  
////#include<unistd.h> // POSIX-specific header for sleep function  
////#endif  
//#define _CRT_SECURE_NO_WARNINGS
//
//int main() 
//{
//
//	////7_3  for
//	//	//习题一
//	//int i = 0, b = 0;
//	//while (i < 11)
//	//{
//	//	b = b + i * i;
//	//	i++;
//	//}
//	//printf("%d\n", b);
//
//
//	////习题2（二分查找）
//	//int k ,left ,right ,c,sz ;
//	//printf("请输入你想要查找的数字：");
//	//scanf_s("%d", &k);
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//sz= sizeof(arr)/sizeof(arr[0]);
//	//left = 0;
//	//right = sz - 1;
//	//while (left <= right)
//	//{
//	//	//中间值
//	//	c = (left + right) / 2;
//	//	if (arr[c] < k)
//	//		left = c + 1;
//	//	else if (arr[c] > k)
//	//		right = c - 1;
//	//	else
//	//	{
//	//		printf("找到了，下标是：%d", c);
//	//		break;
//	//	}
//	//}
//
//
////	//“abc”
////	// ‘a b c \0’
////	//字符显示(遍历显示）习题3
////	char arr1[] = "Hello World!!!";
////	char arr2[] = "##############";
////
////	//其中还有一个指令strlen（直接判断字符串长度）
////	int left = 0;
////	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;// -2是因为要去掉'\0'和最后一个字符
////
////	while (left <= right)
////	{
////		arr2[left] = arr1[left];
////		arr2[right] = arr1[right];
////#ifdef _WIN32  
////		Sleep(10); //休眠1秒钟	需要#include<unistd.h>头文件	// 在Windows系统上使用Sleep函数休眠10毫秒	
////#else  
////		sleep(1); // Sleep for 1 second on POSIX systems  // POSIX系统上休眠1秒钟	
////#endif  
////		printf("%s\n", arr2);
////		//#include<stdlib.h>需要这个头文件才能使用system函数
////		system("cls");//清屏system("cls")是Windows系统的命令，Linux系统可以用system("clear")
////		left++;
////		right--;
////	}
////	printf("%s\n", arr2);
//
//
//
//	////习题4
//	//char arr[20] = { 0 };
//	//int i = 0;
//
//	//while (i<3)
//	//{
//	//	i++;
//	//	printf("请输入你的密码：");
//	//	scanf_s("%s", arr, sizeof(arr) - 1); // 使用sizeof(arr) - 1来避免缓冲区溢出  //最多19个字符	
//	//	//假设密码为“abcdef”
//	//	if (strcmp(arr, "abcdef") == 0) // strcmp函数比较两个字符串是否相等
//	//	{
//	//		printf("密码正确！\n");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		printf("密码错误！\n");
//	//		continue; // 如果密码错误，继续循环	
//	//	}
//	//	printf("失败次数过多，退出程序！\n");
//	//}
//
//
//	return 0;
//}
//

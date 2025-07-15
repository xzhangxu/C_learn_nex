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

////习题1
////函数递归 （初步认识递归函数）（套娃）
//void print(unsigned int n)
//{
//	if (n>9)
//	{
//		print(n / 10); //递归调用，先打印低位数字
//	}
//	printf("%d ", n%10); //打印当前数字
//}
////解释
////print（1234）
////print（123）4
////print（12）3 4
////print（1）2 3 4
////1 2 3 4
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);
//	print(num);
//
//	return 0;
//}


////习题2（编写函数不允许创建临时变量，求字符串长度）
////假设输入“abc”，则输出三
////str_num(abc)
////str_num(bc)+1
////str_num(c)+1+1
////str_num()+1+1+1=3
//int str_num(char* str)//输入的是首元素地址
//{
//	if (*str != '\0')//指针判断数组首元素
//	{
//		return str_num(str + 1) + 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] ="abc";
//	int len = str_num(arr);
//	printf("%d", len);
//
//	return 0;
//}


////习题3（阶乘）
////先输入n
////multiplication（乘法）mul（5）
////mul（4）*5
////mul（3）*4*5
////mul（2）*3*4*5
////mul（1）*2*3*4*5
//int mul(int n)
//{
//	if (n > 1)
//	{
//		return n * mul(n - 1); //递归调用
//	}
//	else
//		return 1; //递归出口
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int factorial = mul(n);
//	printf("%d", factorial);
//
//	return 0;
//}



////习题4（斐波那契数列）(递归有限次数，如果过大，最好使用迭代方法)
////1 1 2 3 5 8 13 21 34.....
//int ss(int n)
//{
//	if (n > 2)
//	{
//		return ss(n - 1) + ss(n - 2); //递归调用
//	}
//	else
//		return 1; //递归出口
//}
//
//int main()
//{
//	int n = 0;
//	int a = 1,b = 1;
//	scanf_s("%d", &n);
//	for (;b<=n;b++)
//	{
//		int fb = ss(b);
//		printf("%d ", fb);
//	}
//	return 0;
//}


//习题5（汉诺塔问题）
//int main()
//{
//
//	return 0;
//}


//习题6（青蛙跳台阶）
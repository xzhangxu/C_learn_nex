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

////ϰ��1
////�����ݹ� ��������ʶ�ݹ麯���������ޣ�
//void print(unsigned int n)
//{
//	if (n>9)
//	{
//		print(n / 10); //�ݹ���ã��ȴ�ӡ��λ����
//	}
//	printf("%d ", n%10); //��ӡ��ǰ����
//}
////����
////print��1234��
////print��123��4
////print��12��3 4
////print��1��2 3 4
////1 2 3 4
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);
//	print(num);
//
//	return 0;
//}


////ϰ��2����д��������������ʱ���������ַ������ȣ�
////�������롰abc�����������
////str_num(abc)
////str_num(bc)+1
////str_num(c)+1+1
////str_num()+1+1+1=3
//int str_num(char* str)//���������Ԫ�ص�ַ
//{
//	if (*str != '\0')//ָ���ж�������Ԫ��
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


////ϰ��3���׳ˣ�
////������n
////multiplication���˷���mul��5��
////mul��4��*5
////mul��3��*4*5
////mul��2��*3*4*5
////mul��1��*2*3*4*5
//int mul(int n)
//{
//	if (n > 1)
//	{
//		return n * mul(n - 1); //�ݹ����
//	}
//	else
//		return 1; //�ݹ����
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



////ϰ��4��쳲��������У�(�ݹ����޴���������������ʹ�õ�������)
////1 1 2 3 5 8 13 21 34.....
//int ss(int n)
//{
//	if (n > 2)
//	{
//		return ss(n - 1) + ss(n - 2); //�ݹ����
//	}
//	else
//		return 1; //�ݹ����
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


//ϰ��5����ŵ�����⣩
//int main()
//{
//
//	return 0;
//}


//ϰ��6��������̨�ף�
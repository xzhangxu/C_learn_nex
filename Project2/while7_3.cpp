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
//	//	//ϰ��һ
//	//int i = 0, b = 0;
//	//while (i < 11)
//	//{
//	//	b = b + i * i;
//	//	i++;
//	//}
//	//printf("%d\n", b);
//
//
//	////ϰ��2�����ֲ��ң�
//	//int k ,left ,right ,c,sz ;
//	//printf("����������Ҫ���ҵ����֣�");
//	//scanf_s("%d", &k);
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//sz= sizeof(arr)/sizeof(arr[0]);
//	//left = 0;
//	//right = sz - 1;
//	//while (left <= right)
//	//{
//	//	//�м�ֵ
//	//	c = (left + right) / 2;
//	//	if (arr[c] < k)
//	//		left = c + 1;
//	//	else if (arr[c] > k)
//	//		right = c - 1;
//	//	else
//	//	{
//	//		printf("�ҵ��ˣ��±��ǣ�%d", c);
//	//		break;
//	//	}
//	//}
//
//
////	//��abc��
////	// ��a b c \0��
////	//�ַ���ʾ(������ʾ��ϰ��3
////	char arr1[] = "Hello World!!!";
////	char arr2[] = "##############";
////
////	//���л���һ��ָ��strlen��ֱ���ж��ַ������ȣ�
////	int left = 0;
////	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;// -2����ΪҪȥ��'\0'�����һ���ַ�
////
////	while (left <= right)
////	{
////		arr2[left] = arr1[left];
////		arr2[right] = arr1[right];
////#ifdef _WIN32  
////		Sleep(10); //����1����	��Ҫ#include<unistd.h>ͷ�ļ�	// ��Windowsϵͳ��ʹ��Sleep��������10����	
////#else  
////		sleep(1); // Sleep for 1 second on POSIX systems  // POSIXϵͳ������1����	
////#endif  
////		printf("%s\n", arr2);
////		//#include<stdlib.h>��Ҫ���ͷ�ļ�����ʹ��system����
////		system("cls");//����system("cls")��Windowsϵͳ�����Linuxϵͳ������system("clear")
////		left++;
////		right--;
////	}
////	printf("%s\n", arr2);
//
//
//
//	////ϰ��4
//	//char arr[20] = { 0 };
//	//int i = 0;
//
//	//while (i<3)
//	//{
//	//	i++;
//	//	printf("������������룺");
//	//	scanf_s("%s", arr, sizeof(arr) - 1); // ʹ��sizeof(arr) - 1�����⻺�������  //���19���ַ�	
//	//	//��������Ϊ��abcdef��
//	//	if (strcmp(arr, "abcdef") == 0) // strcmp�����Ƚ������ַ����Ƿ����
//	//	{
//	//		printf("������ȷ��\n");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		printf("�������\n");
//	//		continue; // ���������󣬼���ѭ��	
//	//	}
//	//	printf("ʧ�ܴ������࣬�˳�����\n");
//	//}
//
//
//	return 0;
//}
//

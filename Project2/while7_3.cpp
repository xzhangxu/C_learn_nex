//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////#ifdef _WIN32  
////#include<windows.h> // Windows-specific header for Sleep function  
////#else  
////#include<unistd.h> // POSIX-specific header for sleep function  
////#endif  
//#define _CRT_SECURE_NO_WARNINGS

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



////�����������Ӵ�С��������
//void change(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	//����
//	scanf_s("%d %d %d", &a, &b, &c);
//	//����
//	if (a < b)
//	{
//		change(&a, &b);
//	}
//	if (a < c)
//	{
//		change(&a, &c);
//	}
//	if (b < c)
//	{
//		change(&b, &c);
//	}
//	//���
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



////��ӡ1-n֮���������ı���
//int ss(int n)
//{
//	if (n % 3 == 0)
//	{
//		printf("%d ", n);
//	}
//	return 0;
//}
//int main()
//{
//	//���뷶Χ
//	int n = 0;
//	scanf_s("%d", &n);
//	for (int i = 1; i< = n ; i++)
//	{
//		//�ж�
//		ss(i);
//	}
//	return 0;
//}


////�������������Լ��
//int main()
//{
//	//����������
//	int a = 0, b = 0, c = 0;
//	int max = 0;
//	scanf_s("%d %d", &a, &b);
//	//����������ǰ��
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	c = b;
//	//�����Լ��
//	for (; c > 1; c--)
//	{
//		if (a % c == 0 && b % c == 0)
//		{
//			max = c; //�ҵ����Լ��
//			//���
//			printf("%d", max);
//			break;
//		}
//	}
//	return 0;
//}
//շת�����
//int main()
//{
//	//����������
//	int a = 0, b = 0, c = 0;
//	int max = 0;
//	scanf_s("%d %d", &a, &b);
//	//����������ǰ��
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	c = a % b;
//	if (c == 0)
//	{
//		printf("%d", b); //������Լ��
//	}
//	else
//	{
//		while (1)
//		{
//			if (a % c == 0 && b % c == 0)
//			{
//				printf("%d", c); //������Լ��
//				break;
//			}
//			c--;
//		}
//	}
//	return 0;
//}


////1-n���ж��ٸ�9
//int sss(int n)
//{
//	if (n == 0)
//		return 0;
//	if (n % 10 == 9)
//		return 1 + sss(n / 10);
//	else
//		return sss(n / 10);
//}
//int main()
//{
//	//���뷶Χ
//	int n = 0;
//	int count = 0;
//	scanf_s("%d", &n);	
//	for (int i = 0; i <= n; i++)
//	{
//		int c = sss(i); //���ú�������ÿ������9�ĸ���
//		count=c+count;
//	}
//	printf("%d", count);
//	return 0;
//}


////��ʮ�����������ֵ
//int main()
//{
//	//׼��ʮ������
//	int arr[10] = { 0 };
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d",&arr[i]);
//	}
//	//�ж��������
//	for (int j=0;j<10;j++)
//	{
//		if (arr[j]>max)
//		{
//			max = arr[j];
//		}
//	}
//	printf("���ֵ�ǣ�%d", max);
//	return 0;
//}


////����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 1, j = 1;
//	for (; j < 10; j++)
//	{
//		for (; i <= j; i++)
//		{
//			//%-2d��ʾ������Ϊ2�������,%2d��ʾ������Ϊ2���Ҷ���
//			printf("%d*%d=%-2d ", i, j, i * j);
//			if (i == j) //����
//			{
//				printf("\n");
//				i = 1; //����iΪ1
//				break; //�����ڲ�ѭ��
//			}
//		}
//	}
//	return 0;
//}

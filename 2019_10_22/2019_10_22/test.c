//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234�����1 2 3 4 
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//void Print(int n)
//{
//	if(n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);//1234
//	Print(n);
//	system("pause");
//	return 0;
//}

//��д���벻��������ʱ���������ַ����ĳ���
//#include<stdio.h>
//#include<Windows.h>
//int Strlen(char arr[])
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	return 1 + Strlen(arr + 1);
//}
//int main()
//{
//	int ret = 0;
//	char arr[] = { "abcdef" };
//	ret = Strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//��n�Ľ׳�
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning (disable:4996)
//int factical(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n*factical(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = factical(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//���n��쳲�����������
//1 1 2 3 5 8 13 21 34 55 89
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n",ret);
//	system("pause");
//	return 0;
//}


//ð������
//ʵ�ֽ�������
//#include<stdio.h>
//#include<Windows.h>
//
//void bobbleSort(int* arr, int len)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//void Print(int arr[],int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bobbleSort(arr,len);
//	Print(arr,len);
//	system("pause");
//	return 0;
//}

//�ǵݹ�ֱ�ʵ�����n��쳲���������
//#include<Windows.h>
//#include<stdio.h>
//#pragma warning(disable:4996)
////1 1 2 3 5
//int fib(int n)
//{
//	int i = 0;
//	int j = 1;
//	int x = 1;
//	int temp = 0;
//	if (n <= 2)
//	return 1;
//	else
//	{
//		
//		for (i = 3; i <= n ; i++)
//		{
//			temp = x + j;//2 4
//			j = x;//1
//			x= temp;//2
//
//		}
//		return temp;
//
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//#include<Windows.h>
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int ciFang(int n, int k)
//{
//	if (1==k)
//		return n;
//	return n*ciFang(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d %d", &n, &k);
//	ret = ciFang(n, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//
//int DigitDum(int n) //1729 1 +7 +2 +9
//{
//	if (n > 9)    //172 9//17 2//1 7//1
//		return n % 10 + DigitDum(n / 10);
//	else
//		return n % 10;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = DigitDum(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//#include<Windows.h>
//#include<stdio.h>
//void reverse_string(char* arr)
//{
//	if (*arr != '/n')
//		reverse_string(arr++);
//	else
//	return printf("%c\n", *arr);
//
//}
//
//int main()
//{
//	char arr[] = { "Hello World" };
//	reverse_string(arr);
//	system("pause");
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ�
//#include<windows.h>
//#include<stdio.h>
//
//int Strlen(char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	else
//		return 1 + Strlen(arr+1);
//}
//
//int main()
//{
//	char arr[] = "asdfgh";
//	int ret = 0;
//	ret = Strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//�ǵݹ�
//#include<stdio.h>
//#include<Windows.h>
//
//int Strlen(char arr[])
//{
//	int x = 0;
//	while (*arr != '\0')
//	{
//		arr = arr + 1;
//		x++;
//	}
//	return x;
//}
//
//int main()
//{
//	char arr[] = { "asdfg" };
//	int ret = 0;
//	ret = Strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//�ݹ�
//#include<Windows.h>
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*factorial(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = factorial(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//�ǵݹ�
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//
//int factorial(int n)
//{
//	int x = 1;
//	while (n > 1)
//	{
//		x = x*n;
//		n--;
//	}
//	return x;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = factorial(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//
//}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
#include<Windows.h>
#include<stdio.h>
#pragma warning(disable:4996)

void Print(int n)//1234  123 4 12 3 1 3 
{
	if (n > 9)
	{
		Print(n / 10);
	}
	
	 printf("%d ", n % 10);
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);
	system("pause");
	return 0;
}
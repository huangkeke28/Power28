//接受一个整型值（无符号），按照顺序打印他的每一位。例如：输入：1234，输出1 2 3 4 
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

//编写代码不允许创建临时变量，求字符串的长度
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

//求n的阶乘
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

//求第n个斐波那契额数列
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


//冒泡排序
//实现降序排列
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

//1.非递归分别实现求第n个斐波那契数。
#include<Windows.h>
#include<stdio.h>
#pragma warning(disable:4996)
//1 1 2 3 5
int fib(int n)
{
	int i = 0;
	int j = 1;
	int x = 1;
	int temp = 0;
	if (n <= 2)
	return 1;
	else
	{
		
		for (i = 3; i <= n ; i++)
		{
			temp = x + j;//2 4
			j = x;//1
			j = temp;//2

		}
		return temp;

	}
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
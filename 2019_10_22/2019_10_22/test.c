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

//非递归分别实现求第n个斐波那契数。
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

//编写一个函数实现n^k，使用递归实现
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

//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
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

//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

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

//递归和非递归分别实现strlen
//递归
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

//非递归
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

//6.递归和非递归分别实现求n的阶乘
//递归
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

//非递归
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


//递归方式实现打印一个整数的每一位
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
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//void Print(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Adjust(int* arr, int len)
//{
//	int* left = arr;
//	int* right = arr + len - 1;
//	while (left < right)
//	{
//		while (*left % 2 != 0)
//		{
//			left++;
//		}
//		while (*right % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = *right;
//			*right = *left;
//			*left = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("调整前：\n");
//	Print(arr, len);
//	Adjust(arr, len);
//	printf("调整后：\n");
//	Print(arr, len);
//	system("pause");
//	return 0;
//}
//2.
////杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
//#define ROW 3
//#define COL 3
//int Find(int arr[ROW][COL], int row, int col, int num)
//{
//	int i = 0;
//	int j = col - 1;
//	int temp = arr[i][j];
//	while (1)
//	{
//		if (temp == num)
//		{
//			return 1;
//		}
//		else if (temp > num && j >0)
//		{
//			temp = arr[i][j--];
//		}
//		else if (temp < num && i <row)
//		{
//			temp = arr[i++][j];
//		}
//		else
//		{
//			return 0;
//		}
//	}
//}
//int main()
//{
//	int arr[ROW][COL] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
//	int num = 0;
//	printf("请输入你想要查找的数字：\n");
//	printf(">");
//	scanf("%d", &num);
//	if (Find(arr, ROW, COL, num))
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	system("pause");
//	return 0;
//}
//
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include<string.h>
//方法一： 循环移位
//void left_remove(char *p, int n, int len)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		char temp = p[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			p[j] = p[j + 1];
//		}
//		p[len - 1] = temp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int n = 0;
//	int len = strlen(arr);
//	//int len = sizeof(arr)/sizeof(arr[0]);
//	printf("%d", len);
//	printf("旋转前: %s\n", arr);
//	printf("旋转几位:");
//	scanf("%d", &n);
//	while (n < 1 || n > len - 1)
//	{
//		if (n == len)
//		{
//			printf("%s\n", arr);
//			system("pause");
//			return 0;
//		}
//		else
//		{
//			printf("输入错误，请重新输入:\n");
//			scanf("%d", &n);
//		}
//	}
//	left_remove(arr, n, len);
//	printf("旋转后:%s\n", arr);
//	system("pause");
//	return 0;
//}

//三步旋转法
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//void left_remove(char* p, int n, int len)
//{
//	reverse(p, p + n - 1);
//	reverse(p + n, p + len - 1);
//	reverse(p, p + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int n = 0;
//	int len = strlen(arr);
//	printf("旋转前:%s\n", arr);
//	printf("旋转几位:");
//	scanf("%d", &n);
//	while (n < 1 || n > len - 1)
//	{
//		if (n == len)
//		{
//			printf("%s\n", arr);
//			system("pause");
//			return 0;
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//			scanf("%d", &n);
//		}
//	}
//	left_remove(arr, n, len);
//	printf("旋转后:%s\n", arr);
//	system("pause");
//	return 0;
//}


//采用数组和指针
//void left_remove(char arr[], int n)
//{
//	char arr1[6] = { 0 };
//	char* mov1 = arr;
//	char* mov2 = arr;
//	char* rev1 = arr1;
//	char* rev2 = arr1;
//	while (n--)
//	{
//		*rev1++ = *mov2++;
//	}
//	while (*mov2)
//	{
//		*mov1++ = *mov2++;
//	}
//	while (*mov1)
//	{
//		*mov1++ = *rev2++;
//	}
//	*mov1 = '\0';
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int n = 0;
//	int len = strlen(arr);
//	printf("旋转前:%s\n", arr);
//	printf("旋转几位:");
//	scanf("%d", &n);
//	while (n < 1 || n > len - 1)
//	{
//		if (n == len)
//		{
//			printf("%s\n", arr);
//			system("pause");
//			return 0;
//		}
//		else
//		{
//			printf("输入错误,请重新输入:");
//			scanf("%d", &n);
//		}
//	}
//	left_remove(arr, n);
//	printf("旋转后:%s\n", arr);
//	system("pause");
//	return 0;
//}


2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 = AABCD和s2 = BCDAA，返回1
给定s1 = abcd和s2 = ACBD，返回0.

AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA

AABCD右旋一个字符得到DAABC
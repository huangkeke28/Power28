#include<Windows.h>
#include<stdio.h>
#pragma warning(disable:4996)
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//void Adjust_arr(int* arr, int len)
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
//			int tmp = *right;
//			*right = *left;
//			*left = tmp;
//		}
//	}
//}
//void Print(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, len);
//	Adjust_arr(arr, len);
//	Print(arr, len);
//
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
//int Find_number(int arr[ROW][COL],int row,int col,int num)
//{
//	int i = 0;
//	int j = col - 1;
//	int tmp = arr[i][j];
//	while (1)
//	{
//		if (tmp == num)
//		{
//			return 1;
//		}
//		else if (tmp < num&& i < col)
//		{
//			tmp = arr[i++][j];
//		}
//		else if (tmp >num&& j > 0)
//		{
//			tmp = arr[i][j--];
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
//	printf("请输入你想查找的数字：\n");
//	printf(">");
//	scanf("%d", &num);
//	if (Find_number(arr,ROW,COL,num))
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

//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
void left_reverse(char* str,int k,int len)
{
	int i = 0;
	int count = 0;
	while (count < k)
	{
		int tmp = str[i];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			str[j] = str[j + 1];
		}
		str[len - 1] = tmp;
		count++;
	}
}
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_reverse2(char* str, int k, int len)
{
	reverse(str, str + k -1);
	reverse(str + k, str - len - 1);
	reverse(str, str +len - 1);
}
void left_reverse3(char* str, int k, int len)
{
	char arr1[6] = { 0 };
	char* mov1 = str;
	char* mov2 = str;
	char* rev1 = arr1;
	char* rev2 = arr1;
	while (k--)
	{
		*rev1 = *mov2;
		rev1++;
		mov2++;
	}
	while (*mov2)
	{
		*mov1 = *mov2;
		mov1++;
		mov2++;
	}
	while (*mov1)
	{
		*mov1 = *rev2;
		mov1++;
		rev2++;
	}
}
int main()
{
	char str[] = "asdfg";
	int k = 0;
	int len = strlen(str);
	printf("%s\n", str);
	printf("输入你想左旋的字符数:\n");
	scanf("%d", &k);
	while (k<0 || k>len)
	{
		printf("输入错误，重新输入\n");
		scanf("%d", &k);
	}
	left_reverse3(str,k,len);
	printf("%s\n", str);
	system("pause");
	return 0;
}


//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
void LeftRotate(char* s, int k)
{
	int len = strlen(s);
	char *p;
	char *q;
	for (p = s + k - 1; p >= s; p--)
	{
		for (q = p; q < p + len - k; q++)
		{
			char tmp = *q;
			*q = *(q + 1);
			*(q + 1) = tmp;
		}
	}
}
void RightRotate(char* s, int k)
{
	int len = strlen(s);
	char* p;
	char* q;
	for (p = s + len - k; p < s + len; p++)
	{
		for (q = p; q > s; q--)
		{
			char tmp = *q;
			*q = *(q - 1);
			*(q - 1) = tmp;
		}
	}
}
int isROtate(char* s1, char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)
	{
		return 0;
	}
	char * s;
	int i = 0;
	for (i = 0; i <= len1; i++)
	{
		s = s1;
		LeftRotate(s, i);
		if (strcmp(s, s2) == 0)
		{
			return 1;
		}
		s = s1;
		RightRotate(s, i);
		if (strcmp(s,s2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	if (isRotate(s1, s2))
	{
		printf("是旋转之后的\n");
	}
	else
	{
		printf("不是旋转之后的\n");
	}
	system("pause");
	return 0;
}
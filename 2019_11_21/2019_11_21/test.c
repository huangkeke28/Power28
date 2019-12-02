#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define ROW 3
#define COL 3
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
void adjustArr(int* arr, int len)
{
	int i = 0;
	int* left = arr;
	int* right = arr + len - 1;
	int temp = 0;
	while (left < right)//2 3 4 5 6 7 8
	{
		while (*left % 2 == 0)//偶数
		{
			left++;
		}
		while (*right % 2 != 0)//奇数
		{
			right--;
		}
		if (left < right)
		{
			temp = *left;
			*left = *right;
			*right = temp;
		}
	}
}
void Print(int* arr, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 2, 3 ,4 ,5 ,6 ,7 ,8 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Print(arr, len);
	adjustArr(arr, len);
	Print(arr, len);
	system("pause");
	return 0;
}

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
#if 0
void Print(int arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int cheek(int arr[ROW][COL], int row, int col, int num)
{
	int i = 0;
	int j = col - 1;
	int temp = arr[i][j];
	while (1)
	{
		if (temp == num)
		{
			return 1;
		}
		else if (temp < num&& j >= 0)
		{
			temp = arr[i++][j];
		}
		else if (temp > num&& j >= 0)
		{
			temp = arr[i][j--];
		}
		else
			return 0;
	}
}

int main()
{
	int arr[ROW][COL] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	int num = 0;
	printf("数组为：\n");
	Print(arr, ROW, COL);
	printf("请输入你要查找的数字：\n");
	printf(">");
	scanf("%d", &num);
	if (cheek(arr,ROW,COL,num))
	{
		printf("%d在数组中\n", num);
	}
	else
	{
		printf("%d不在数组中\n", num);
	}

	system("pause");
	return 0;
}
#endif
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define ROW 3
#define COL 3
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
void adjustArr(int* arr, int len)
{
	int i = 0;
	int* left = arr;
	int* right = arr + len - 1;
	int temp = 0;
	while (left < right)//2 3 4 5 6 7 8
	{
		while (*left % 2 == 0)//ż��
		{
			left++;
		}
		while (*right % 2 != 0)//����
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
////���Ͼ���
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
	printf("����Ϊ��\n");
	Print(arr, ROW, COL);
	printf("��������Ҫ���ҵ����֣�\n");
	printf(">");
	scanf("%d", &num);
	if (cheek(arr,ROW,COL,num))
	{
		printf("%d��������\n", num);
	}
	else
	{
		printf("%d����������\n", num);
	}

	system("pause");
	return 0;
}
#endif
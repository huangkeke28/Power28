#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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
//	printf("����ǰ��\n");
//	Print(arr, len);
//	Adjust(arr, len);
//	printf("������\n");
//	Print(arr, len);
//	system("pause");
//	return 0;
//}
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
//	printf("����������Ҫ���ҵ����֣�\n");
//	printf(">");
//	scanf("%d", &num);
//	if (Find(arr, ROW, COL, num))
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	system("pause");
//	return 0;
//}
//
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

#include<string.h>
//����һ�� ѭ����λ
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
//	printf("��תǰ: %s\n", arr);
//	printf("��ת��λ:");
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
//			printf("�����������������:\n");
//			scanf("%d", &n);
//		}
//	}
//	left_remove(arr, n, len);
//	printf("��ת��:%s\n", arr);
//	system("pause");
//	return 0;
//}

//������ת��
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
//	printf("��תǰ:%s\n", arr);
//	printf("��ת��λ:");
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
//			printf("�����������������\n");
//			scanf("%d", &n);
//		}
//	}
//	left_remove(arr, n, len);
//	printf("��ת��:%s\n", arr);
//	system("pause");
//	return 0;
//}


//���������ָ��
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
//	printf("��תǰ:%s\n", arr);
//	printf("��ת��λ:");
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
//			printf("�������,����������:");
//			scanf("%d", &n);
//		}
//	}
//	left_remove(arr, n);
//	printf("��ת��:%s\n", arr);
//	system("pause");
//	return 0;
//}


2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 = AABCD��s2 = BCDAA������1
����s1 = abcd��s2 = ACBD������0.

AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA

AABCD����һ���ַ��õ�DAABC
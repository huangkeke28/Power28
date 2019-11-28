#include<Windows.h>
#include<stdio.h>
#pragma warning(disable:4996)
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

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
//	printf("������������ҵ����֣�\n");
//	printf(">");
//	scanf("%d", &num);
//	if (Find_number(arr,ROW,COL,num))
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

//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
	printf("���������������ַ���:\n");
	scanf("%d", &k);
	while (k<0 || k>len)
	{
		printf("���������������\n");
		scanf("%d", &k);
	}
	left_reverse3(str,k,len);
	printf("%s\n", str);
	system("pause");
	return 0;
}


//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
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
		printf("����ת֮���\n");
	}
	else
	{
		printf("������ת֮���\n");
	}
	system("pause");
	return 0;
}
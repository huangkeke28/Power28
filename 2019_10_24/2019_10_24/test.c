//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//1.�ݹ�
//쳲����������� 1 1 2 3 5 8 13 21 34 55 89
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//
//1�ǵݹ�
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//
//int Fib(int n)
//{
//	int first = 1;
//	int second = 1;
//	int third = 1;
//	while(n > 2)
//	{
//		third = first + second;
//		first = second;
//		second = third;
//        n--;
//	}
//
//		return third;
//
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//#include<Windows.h>
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int Multiply(int n, int k)
//{
//	if (1 == k)
//		return n;
//	else
//		return n * Multiply(n, k-1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Multiply(n, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//
//int DigitSum(int n)
//{
//	if (n < 9)
//	{
//		return n;
//	}
//	else
//	{
//		return n % 10 + DigitSum(n / 10);    
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//#include<windows.h>
//#include<stdio.h>
//
//
//void reverse_string(char* arr)
//{
//	if (*arr != '\0')
//	{
//		reverse_string(arr + 1);
//		printf("%c",*arr);
//	}
//}
//
//int main()
//{
//	char arr[] = "asdfg";
//	reverse_string(arr);
//	system("pause");
//	return 0;
//}
//
//
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ�
//#include<stdio.h>
//#include<Windows.h>
//
//int Strlen(char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	else 
//		return 1 + Strlen(arr + 1);
//}
//int main()
//{
//	char arr[] = "asdfgh";
//	int ret = 0;
//	ret = Strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//�ǵݹ�
//#include<stdio.h>
//#include<Windows.h>
//
//int Strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "adfgh" };
//	int ret = 0;
//	ret = Strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//�ݹ�
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//
//int Multiply(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*Multiply(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Multiply(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//�ǵݹ�
//#include<windows.h>
//#include<stdio.h>
//#pragma warning(disable:4996)
//int Multiply(int n)
//{
//	int i = 0;
//	int Sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		Sum = Sum*i;
//	}
//	return Sum;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Multiply(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//#include<Windows.h>
//#include<stdio.h>
//#pragma warning(disable:4996)
//void Print(int n)
//{
//	if (n < 9)
//		printf("%d ", n);
//	else
//	{
//		Print(n / 10);
//		printf("%d ", n % 10);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	system("pause");
//	return 0;
//}

//ð������
//����
#include<Windows.h>
#include<stdio.h>
void BubbleSort(int* arr, int len)
{
	int i = 0;
	int j = 0;

	for (j = 0; j < len - 1; j++)
	{
		for (i = 0; i < len - 1 - j; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			
		}
	}
}
void Print(int* arr)
{
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 11, 23, 435, 56, 231, 67, 88, 333, 11 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	Print(arr);
	printf("\n");
	system("pause");
	return 0;
}
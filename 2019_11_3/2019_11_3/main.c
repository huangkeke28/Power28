#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#if 0
void BinarySearch(int* arr, int left, int right, int data)
{
	if (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] == data)
		{
			return printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
		}
		else if (arr[mid] > data)
		{
			return BinarySearch(arr, left, mid - 1, data);
		}
		else
		{
			return BinarySearch(arr, mid + 1, right, data);
		}
	}
	else
	{
		return printf("û�ҵ�\n");
	}
	
}
int main()
{
	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 123, 450 };
	BinarySearch(arr, 0, 10, 123);
	system("pause");
	return 0;
}
#endif
//��쳲��������еĵ�N��
//1 1 2 3 5 8 13 21 34 55
//�ݹ�
int Fib(int n)
{

	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
//�ǵݹ�
int Flib(n)
{
	int i = 0;
	int k = 1;
	int j = 1;
	int s = 1;
	if (n > 2)
	{
		for (i = 0; i < n-2; i++)
		{
			k = j;
			j = s;
			s = k + j;
		}
	}
	return s;
}
//��n�Ľ׳�
int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*Fac(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret=Flib(n);
	//ret = Fac(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//
//void printfFun(int i)
//{
//	int j = 0;
//	int k = 0;
//	for (j = 1; j <= i; j++)
//	{
//		for (k = 1; k <= j; k++)
//		{
//			printf("%d*%d=%2d ", k, j, j*k);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printfFun(i);
//	system("pause");
//	return 0;
//}

//2.ʹ�ú���ʵ���������Ľ�����
//#include<stdio.h>
//#include<Windows.h>
//void changeCount(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	changeCount(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}

//3.ʵ��һ�������ж�year�ǲ������ꡣ
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//
//int  isPrime(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0)
//	{
//		return year;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d", &year);
//	ret = isPrime(year);
//	if ( year == -1)
//	{
//		printf("%d��������\n", year);
//	
//	}
//	else
//	{
//		printf("%d������\n", year);
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<Windows.h>
//
//Swap(int*pa, int* pb)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	Swap(pa, pb);
//
//	system("pause");
//	return 0;
//}

//#include<Windows.h>
//#include<stdio.h>
//
//double Sum(int N)
//{
//	int flag = 1;
//	double d = 0.0;
//	for (int i = 1; i <= N; i++)
//	{
//		d += 1.0 / i*flag;
//		flag = -flag;
//	}
//	return d;
//}
//int main()
//{
//	printf("%lf\n", Sum(100));
//	system("pause");
//	return 0;
//}

//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//void init(int* arr, int)
//{
//	
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		scanf("%d", arr[i]);
//	}
//}
//void empty(int* arr, int)
//{
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
//void reverse(int* arr, int)
//{
//
//}
//int main()
//{
//	int arr[5];
//	init(arr,5);
//	empty(arr,5);
//	reverse(arr,5);
//	system("pause");
//	return 0;
//}


//5.ʵ��һ���������ж�һ�����ǲ���������
#include<stdio.h>
#include<Windows.h>
#include<math.h>
#pragma warning(disable:4996)

int isPrime(int i)
{
	int x = 0;
	for (x = 2; x <= i; x++)
	{
		if (i%x == 0)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int i = 0;
	scanf("%d", &i);
	if (isPrime(i))
	{
		printf("%d������\n", i);
	}
	else
	{
		printf("%d��������\n", i);
	}
	system("pause");
	return 0;
}
//ͨ��printf��ӡ ���ʹ�� ������ɫ
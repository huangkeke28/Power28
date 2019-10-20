//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表
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

//2.使用函数实现两个数的交换。
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

//3.实现一个函数判断year是不是润年。
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
//		printf("%d不是闰年\n", year);
//	
//	}
//	else
//	{
//		printf("%d是闰年\n", year);
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
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
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


//5.实现一个函数，判断一个数是不是素数。
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
		printf("%d是素数\n", i);
	}
	else
	{
		printf("%d不是素数\n", i);
	}
	system("pause");
	return 0;
}
//通过printf打印 如何使它 带上颜色
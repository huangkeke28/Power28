//打印菱形图案
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (line - 1 - i) * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//打印1~1000000的水仙花数
//水仙花数？每位的个数次方和等于这个数 1 先求他的个数 2 求每每数 3 判断
//#include<stdio.h>
//#include<Windows.h>
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	
//	
//	for (i = 1; i <= 1000000; i++)
//	{
//		//126 126/10=12 12%10=1 1/10=0
//		int count = 0;
//		//int sum = 0;
//
//		int tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);// pow()库函数 求一个数的多少次方
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//求Sn = a + aa + aaa + aaaa + aaaaa 
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int s = 0;
//	int Sn = 0;
//	int h = 0;
//	scanf("%d %d", &a, &h);
//	for (i = 0; i < h; i++)
//
//	{
//		s = s * 10 + a;
//		Sn += s;
//	}
//	printf("%d\n", Sn);
//	system("pause");
//	return 0;
//}
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996);
//void is_mult(int j)
//{
//	int i = 0;
//	int k = 0;
//	for (i = 1; i <= j; i++)
//	{
//		for (k = 1; k <= i; k++)
//		{
//			printf("%d*%d=%2d ", i, k, k*i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int j = 0;
//	scanf("%d", &j);
//	is_mult(j);
//	system("pause");
//	return 0;
//}
//2.使用函数实现两个数的交换。
//#include<stdio.h>
//#include<Windows.h>
//void is_fun(int* px, int* py)
//{
//	int p = *px;
//	*px = *py;
//	*py = p;
//	
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	is_fun(&a,&b);
//	printf("a=%d b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//3.实现一个函数判断year是不是润年。
//#include<stdio.h>
//#include<windows.h>
//#pragma warning(disable:4996)
//int is_prime(int year)
//{
//	if ((0 == year % 4 && 0 != year % 100) || year % 400 == 0)
//	{
//		return year;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_prime(year))
//	{
//		printf("%d是闰年\n",year);
//	}
//	else
//	{
//		printf("%d不是闰年\n",year);
//	}
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
//void init(int* arr)
//{
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 33, 54, 23, 67 };
//	init();
//	empty();
//	reverse();
//	system("pause");
//	return 0;
//}
//5.实现一个函数，判断一个数是不是素数。
#include<stdio.h>
#include<math.h>
#include<Windows.h>
#pragma warning(disable:4996)
int isPrime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (0 == i % j);
		{
			return 0;
		}
	}
	return i;
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
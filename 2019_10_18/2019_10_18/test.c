//��ӡ����ͼ��
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
//��ӡ1~1000000��ˮ�ɻ���
//ˮ�ɻ�����ÿλ�ĸ����η��͵�������� 1 �������ĸ��� 2 ��ÿÿ�� 3 �ж�
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
//			sum += pow(tmp % 10, count);// pow()�⺯�� ��һ�����Ķ��ٴη�
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
//��Sn = a + aa + aaa + aaaa + aaaaa 
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
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
//2.ʹ�ú���ʵ���������Ľ�����
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
//3.ʵ��һ�������ж�year�ǲ������ꡣ
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
//		printf("%d������\n",year);
//	}
//	else
//	{
//		printf("%d��������\n",year);
//	}
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
//5.ʵ��һ���������ж�һ�����ǲ���������
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
		printf("%d������\n", i);
	}
	else
	{
		printf("%d��������\n", i);
	}
	system("pause");
	return 0;
}
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//
//void printTable(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printTable(n);
//	system("pause");
//	return 0;
//}
//
//
//2.使用函数实现两个数的交换。
//#include<Windows.h>
//#include<stdio.h>
//void Swap(int* i, int* j)
//{
//	int temp = *i;
//	*i = *j;
//	*j = temp;
//}
//int main()
//{
//	int i = 10;
//	int j = 20;
//	printf("i = %d j = %d\n", i, j);
//	Swap(&i, &j);
//	printf("i = %d j = %d\n", i, j);
//	system("pause");
//	return 0;
//}
//
//3.实现一个函数判断year是不是润年。
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//
//int isRun(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return year;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = 0;
//	ret = isRun(year);
//	if (ret)
//	{
//		printf("%d是闰年\n", year);
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
//
//#include<stdio.h>
//#include<Windows.h>
//void Print(int, int);
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//void empty(int arr[], int sz)
//{
//	memset(arr, -1, sz*arr[0]);
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	Print(arr, sz);
//	reverse(arr,sz);
//	Print(arr, sz);
//	empty(arr,sz);
//	Print(arr, sz);
//	
//	system("pause");
//	return 0;
//}
//
//5.实现一个函数，判断一个数是不是素数。
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//int isPrime(int x)
//{
//	int j = 2;
//	for (j = 2; j < x; j++)
//	{
//		if (x%j == 0)
//			return 0;
//	}
//	return x;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = isPrime(n);
//	if (ret)
//	{
//		printf("%d是素数\n", ret);
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	system("pause");
//	return 0;
//}
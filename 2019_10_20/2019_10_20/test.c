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
//
//void printArr(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void init(int* arr, int len)
//{
//	
//	int i = 0;
//	for (i = 0; i <= len; i++)
//	{
//		arr[i] = i;
//	}
//	printArr(arr, len);
//	printf("对数组初始化\n");
//}
//void empty(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		arr[i] = 0;
//	}
//	printArr(arr, len);
//	printf("对数组清空\n");
//
//}
//void reverse(int* arr, int len)
//{
//	int left = 0;
//	int right= len - 1;
//	for (left = 0; left <= right; left++)
//	{
//		int temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//	}
//	printArr(arr, len);
//	printf("对数组元素的逆置\n");
//}
////void printArr(int* arr,int len)
////{
////	int i = 0;
////	for (i = 0; i < len; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////}
//int main()
//{
//	int arr[5] = {2,3,4,5,6};
//	int len = sizeof(arr) / sizeof(arr);
//	printArr(arr, len);
//	//init(arr,len);
//	//empty(arr,len);
//	//reverse(arr,len);
//	system("pause");
//	return 0;
//}


//5.实现一个函数，判断一个数是不是素数。
//#include<stdio.h>
//#include<Windows.h>
//#include<math.h>
//#pragma warning(disable:4996)
//
//int isPrime(int i)
//{
//	int x = 0;
//	for (x = 2; x <= i; x++)
//	{
//		if (i%x == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (isPrime(i))
//	{
//		printf("%d是素数\n", i);
//	}
//	else
//	{
//		printf("%d不是素数\n", i);
//	}
//	system("pause");
//	return 0;
//}
//通过printf打印 如何使它 带上颜色

//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//#include<stdio.h>
//#include<Windows.h>
//#include<memory.h>
//void printfarr(int[], int);
//void init(int* arr,int sz)
//{
//	int j = 0;
//	for (j = 0; j <=sz; j++)
//	{
//		arr[j] = j;
//	}
//	printf("初始化数组\n");
//	printfarr(arr, sz);
//}
//
//void empty(int* arr, int sz)
//{
//	memset(arr, 0, sz *sizeof(arr[0]));
//	printf("清空数组\n");
//	printfarr(arr, sz);
//}
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right - i];
//		arr[right - i] = temp;
//	}
//	printf("逆置数组");
//	printfarr(arr, sz);
//	
//}
//void printfarr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 32, 3, 4, 5, 63, 2, 78, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	empty(arr, sz);
//	init(arr, sz);
//	//printfarr(arr, sz);
//	reverse(arr, sz);
//	system("pause");
//	return 0;
//}
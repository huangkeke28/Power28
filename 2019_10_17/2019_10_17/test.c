////写一个猜字游戏（包括密码登陆）
//#include<stdio.h>
//#include<Windows.h>
//#include<string.h>
//#include<time.h>
//#pragma warning(disable:4996)
//
//void menu()
//{
//	printf("****************************\n");
//	printf("***  1. play    2. exit  ***\n");
//	printf("****************************\n");
//}
//void game()
//{
//	int s = rand() % 100 + 1;
//	int g = 0;
//	while (1)
//	{
//		printf("Please Enter the number you guess:\n");
//		printf(">");
//		scanf("%d", &g);
//		if (g > s)
//		{
//			printf("guess big\n");
//		}
//		else if (g < s)
//		{
//			printf("guess small\n");
//		}
//		else
//		{
//			printf("Congratulatuions ! You are right!!\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	char name[32];
//	char password[32];
//	int x = 0;
//	int count = 3;
//	for (x = 0; x < 3; x++)
//	{
//		count--;
//		printf("Please Enter your name:\n");
//		printf(">");
//		scanf("%s", name);
//		printf("Please Entr your password:\n");
//		printf(">");
//		scanf("%s", password);
//		if (strcmp(name, "huyu") == 0 && strcmp(password, "1314521")==0)
//		{
//
//			break;
//		}
//		else
//		{
//			printf("your name or password error, you have %d times\n", count);
//		}
//	}
//	if (3 == x)
//	{
//		printf("loading fail\n");
//	}
//	else
//	{
//		printf("Congratulations!loagin succeed!\n");
//		int i = 6;
//		for (i = 6; i >= 0; i--)
//
//		{
//			printf("loading......%d\r", i);
//			Sleep(1000);
//		}
//		printf("loading....done\n");
//		srand((unsigned int)time(NULL));
//		int flag = 0;
//		while (!flag)
//		{
//
//			menu();
//			int h = 0;
//			printf("Please Enter your choose:\n");
//			printf(">");
//			scanf("%d", &h);
//			switch (h)
//			{
//			case 1:
//				game();
//				break;
//			case 2:
//				printf("bye bye ！\n");
//				flag = 1;
//				break;
//			default:
//				printf("Enter error! Please try again!\n");
//				break;
//			}
//		}
//	}
//	
//	system("pause");
//	return 0;
//
//}
//实现字符串两边向中间汇聚的动态变化
//#include<stdio.h>
//#include<Windows.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hu yu i love you for ever!!!!!!!";
//	char arr2[] = "********************************";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++, right--;
//		printf("%s\r", arr2);
//		Sleep(1000);
//		//system("cls");
//	}
//	system("pause");
//	return 0;	
//}
//写一个关机程序
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//#include<string.h>
//int main()
//{
//	while (1)
//	{
//		system("shutdown -s -t 60");
//		printf("你的电脑将在60秒内关闭，输入我是猪则取消关机\n");
//		printf(">");
//		char arr[32];
//		scanf("%s", arr);
//		if (strcmp("我爱胡钰", arr) == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	printf("关机取消\n");
//	system("pause");
//	return 0;
//}
//打印输出99乘法表
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//函数练习
//NULL -空指针
//null,NUL -'\0'

#if 0
#include<stdio.h>
#include<string.h>
#include<Windows.h>

#pragma warning(disable:4996)

int get_max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a,b);
	printf("max = %d\n", max);



	//char arr[] = "hello world";
	//memset(arr, 'y', 3);
	//printf("%s\n", arr);
	//strcpy 拷贝的时候包括\0
	//char arr1[20] = { 0 };
	//char arr2[] = "hell world";
	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);
	system("pause");
	return 0;
}
#endif
//#include<stdio.h>
//#include<Windows.h>
//
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	Swap(a,b);
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
#if 0
#include<stdio.h>
#include<Windows.h>

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 10;
	//int* pa = &a;//pa就是一个指针变量
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	Swap(&a, &b);
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}
#endif

//涉及函数的时候什么时候传地址？什么时候传值？ 传值调用 传址调用
//函数内部如果想改变函数外部的某些值时，要传地址
//
//1.写一个函数可以判断一个数是不是素数
//2.写一个函数判断一年是不是闰年
//3.写一个函数，实现一个整形有序数组的二分查找
//4.写一个函数，每调用一次这个函数，就会将num的值增加1
//TDD-测试驱动开发
#if 0
#include<stdio.h>
#include<Windows.h>
int is_prime(int x)
{
	int i = 0;
	for (i = 2; i < x - 1; i++)
	{
		if (0 == x%i)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
int main()
{
	int i = 0;
	int k = 0;
	for (i = 100; i <= 200; i++)
	{
		if (1 == is_prime(i))
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}
#endif

#if 0
#include<stdio.h>
#include<Windows.h>
int is_leap_year(int x)
{
	return(0 == x % 4 && 0 != x % 100 || 0 == x % 400);
	/*if (0 == x % 4 && 0 != x % 100||0==x%400)
	{
		return 1;

	}
	else
	{
		return 0;
	}*/
}
int main()
{
	int i = 0;
	
	for (i = 1000; i <= 2000; i++)
	{
		if (1 == is_leap_year(i))
		{
			printf("%d\n", i);
		}
	}

	system("pause");
	return 0;
}
#endif
#if 0
#include<stdio.h>
#include<Windows.h>

int binary_search(int* arr, int x, int y)
{
	//binary 二进制
	int left = 0;
	int right = y - 1;
	int mid = left + (right - left) / 2;
	while (left <= right)
	{
		if (arr[mid] < x)
		{
			left = mid + 1;
		}
		else if (arr[mid]>x)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	
		return -1;

}
int main()
{
	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
	
	int len = sizeof(arr) / sizeof(arr[0]);
	

	int ret = binary_search(arr, 34, len);
	if (-1 == ret)
	{
		printf("没有找到！！！\n");
	}
	else
	{
		printf("找到了,下标为%d\n", ret);
	}
	system("pause");
	return 0;

}
#endif
#if 0
#include<stdio.h>
#include<Windows.h>
void Add(int* pn)
{
	(*pn)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	system("pause");
	return 0;
}
#endif


#include<stdio.h>
#include<Windows.h>
#include"add.h"

#pragma comment(lib,"2019_10_17_2.lib")
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("c = %d\n", c);
	system("pause");
	return 0;
}
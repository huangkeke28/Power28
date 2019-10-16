//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	printf("Hello World!!!!\n");
//	system("pause");
//	return 0;
//}
//
//1.完成猜数字游戏。
// 1 菜单 2 玩游戏
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//#include<time.h>
//void menu()
//{
//	printf("########################\n");
//	printf("##  1. play   2.exit  ##\n");
//	printf("########################\n");
//}
//void game()
//{
//	int s = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入您要猜的数字：\n");
//		printf(">");
//		int i = 0;
//		scanf("%d", &i);
//		if (i > s)
//		{
//			printf("您猜大了!\n");
//		}
//		else if (i < s)
//		{
//			printf("您猜小了！\n");
//		}
//		else
//		{
//			printf("恭喜您，猜对了，值为%d\n", s);
//			break;
//		}
//	}
// }
//int main()
//{
//	int flag = 1;
//	srand((unsigned int)time(NULL));
//	while (flag)
//	{
//
//		menu();
//		printf("请选择您要做的操作：\n");
//		printf(">");
//		int x;
//		scanf("%d", &x);
//		switch (x)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("再见\n");
//			flag = 0;
//			break;
//		default:
//			printf("输入错误请重新输入\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
//#include<stdio.h>
//#include<Windows.h>
//#include<string.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 123, 134, 166, 177, 199 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = len -1;
//	int x = 0;
//	printf("请输入您要查找的数字：\n");
//	printf(">");
//	scanf("%d", &x);
//
//	while (left <= right)
//	{
//		/*int x = 0;
//		printf("请输入您要查找的数字：\n");
//		printf(">");
//		scanf("%d", &x);*/
//		int mid = (left + right) / 2;
//		if (x > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("您要查找的数字下标为：%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("输入错误，您要查找的数字没有\n");
//		printf("返回 -1\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#include<stdio.h>
//#include<Windows.h>
//#include<string.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i = 0;
//	char arr[32];
//	int count = 2;
//	
//	for (i = 3; i > 0; i--)
//	{
//		
//		printf("请输入您的密码");
//		printf(">");
//		
//		scanf("%s", arr);
//		if (strcmp(arr, "123567") == 0)
//		{
//			printf("输入成功！\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请再次输入，你还有%d次机会\n", count);
//			count--;
//			
//		}
//
//	}
//
//	system("pause");
//	return 0;
//}
//
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
//#include<stdio.h>
//#include<stdlib.h>
//
//#include<Windows.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//
//
//		if ((ch >= 'A') && ('Z' >= ch))
//		{
//			putchar(ch + 32);
//		}
//		else if ((ch >= 'a') && ('z' >= ch))
//		{
//			putchar(ch - 32);
//		}
//		else
//		{
//
//		}
//	}
//	system("pause");
//	return 0;
//}

//5.关机程序
#include<stdio.h>

#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	char hh[32];
	system("shutdown -s -t 60 ");
	while (1)
	{

		printf("你的电脑将在60秒内关机，请输入胡钰我爱你，取消此操作：\n");
		printf(">");
		scanf("%s", hh);
		if (strcmp(hh, "胡钰我爱你") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	system("pause");
	return 0;
}
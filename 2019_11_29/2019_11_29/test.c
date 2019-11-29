#include<stdio.h>
#include<Windows.h>
#include<assert.h>
#pragma warning(disable:4996)
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
//void find_number(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < len; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 4, 4, 5, 5, 8, 9, 9, 10, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	find_number(arr, len);
//	system("pause");
//	return 0;
//}

//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
int waterCount(int money)   
{
	int n = 1 , s;  // 20 + 10 + 5 + 2 + 1 + 1
	int sum = money;
	while (n != 0)
	{
		n = money / 2;
		s = money % 2;
		money = n + s;
		sum += n;
		
	}
	return sum;
}
int main()
{
	int money = 20;
	int ret = waterCount(money);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//3.模拟实现strcpy
//void myStrcpy(char* dst, char* src)
//{
//	//char* cp = dst;
//	//assert(dst);
//	//assert(src);
//	while (*src)
//	{
//		*dst++ = *src++;
//	}
//}
//int main()
//{
//	char dst[20] = { 0 };
//	char src[] = "hello world!";
//	myStrcpy(dst, src);
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}
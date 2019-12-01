#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。

//void findOneNumber(int* arr, int len)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		int count = 0;
//		for (j = 0; j < len; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (1 == count)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 3, 6, 7, 7, 8, 8, 9, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	findOneNumber(arr, len);
//	system("pause");
//	return 0;
//}
//
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//int warterCount(int money)
//{
//	int bottle = 1;
//	int yu = 0;
//	int sum = money;
//	while (bottle)
//	{
//		bottle = money / 2;
//		yu = money % 2;
//		money = bottle + yu;
//		sum += bottle;
//	}
//	return sum;
//}
//int main()
//{
//	int money = 20;
//	int ret = warterCount(money);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//3.模拟实现strcpy
//void myStrcpy(char* dst, char* src)
//{
//	char* cp = dst;
//	while (*src)
//	{
//		*cp++ = *src++;
//	}
//}
//int main()
//{
//	char src[] = "hello world";
//	char dst[15] = { 0 };
//	myStrcpy(dst, src);
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}

//4.模拟实现strcat
//void myStrcat(char* dst, char* src)
//{
//	char* ret = dst;
//	while (*ret != '\0')
//	{
//		ret++;
//	}
//
//	while (*src)
//	{
//		*ret++ = *src++;
//	}
//	*ret = '\0';
//}
//
//int  main()
//{
//	char src1[] = "i ";
//	char src2[] = "love ";
//	char src3[] = "you";
//	char dst[20] = { 0 };
//	myStrcat(dst, src1);
//	myStrcat(dst, src2);
//	myStrcat(dst, src3);
//	printf("%s\n", dst);
//	system("pause");
//	return 0;
//}
#define ROW 5
#define COL 5
#if 0
int main()
{
	int array[ROW][COL] = { 0 };
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (0 == j || i == j)
			{
				array[i][j] = 1;
			}
			else
			{
				array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
			}
		}
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#endif

#if 0
//将value的pos二进制比特位置0
//将value的pos二进制比特位置1
//检测 value的pos二进制比特位是0还是1
//异或 相异为1 相同为0
// value &= (~(1<<pos))
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	unsigned int ret = 0;
	for (int i = 0; i < 32; i++)
	{
		
		if (value & 1)
		{
			ret += pow(2, 31 - i);	
		}
		value >>= 1;
	}
	return ret;
}
//unsigned int reverse_bit2(unsigned int value)
//{
//	unsigned int ret = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		ret <<= 1;
//
//		if (value & 1)
//		{
//			ret |= 1;
//		}
//		
//
//		value >>= 1; 
//	}
//	return ret;
//}
int main()
{
	printf("%u\n", reverse_bit2(25));
	system("pause");
	return 0;
}
#endif

int Find(int array[], int size)
{
	int ret = 0;
	for (int i = 0; i < size; i++)
	{
		ret ^= array[i];
	}

}
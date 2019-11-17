#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

unsigned int reverse_bit(unsigned int value)
{
	int sum = 0;
	int ret = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		ret = ((value >> i) & 1)*pow(2, 31 - i); 
		sum += ret;
	}
	return sum;
}

int main()
{
	unsigned int num = 1006;
	unsigned int ret = 0;
	ret = reverse_bit(num);
	printf("%u\n", ret);
	system("pause");
	return 0;
}

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = (a >> 1 ) + (b >> 1);
//	int c = (a + b) >> 1;
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//int main()
//{
//	int arr[] = { 1, 3, 4, 5, 6, 7, 8, 1, 3, 5, 6, 7, 8 };
//	int i = 0;
//	int k = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		k ^= arr[i];
//	}
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}
	//4.
	//有一个字符数组的内容为:"student a am i",
	//			请你将数组的内容改为"i am a student".
	//			要求：
	//			不能使用库函数。
	//			只能开辟有限个空间（空间个数和字符串的长度无关）。

	//			student a am i
	//			i ma a tneduts
	//			i am a student
//int main()
//{
//	char a1[] = "student";
//	char a2[] = "a";
//	char a3[] = "am";
//	char a4[] = "i";
//	char* arr[] = { &a1, &a2, &a3, &a4 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 7;j++)
//		printf("%c", *arr[i]+j);
//	}
//	system("pause");
//	return 0;
//}





//void reverse_all(char arr[])
//{
//	//逆置这个数组
//	//二分法
//	char *start = arr;
//	char* pc = arr;
//	while (*pc != '\0')
//	{
//		pc++;
//	}
//	char* end = pc;
//	end--;//确定结尾字符的位置
//	while (start < end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
////写一个以空格为分隔符将每个字符串按二分法逆置的函数
//void reverse_every(char* arr)
//{
//	while (*arr != '\0')
//	{
//		char* start = arr;
//		char* end = arr;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		end--;
//		while (start < end)
//		{
//			char temp = *end;
//			*end = *start;
//			*start = temp;
//			start++;
//			end--;
//		}
//		while (*arr != ' ' && *arr != '\0')
//		{
//			arr++;
//		}
//		if (*arr != '\0')
//		{
//			++arr;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	printf("%s\n", arr);
//	reverse_all(arr);
//	printf("%s\n", arr);
//	reverse_every(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
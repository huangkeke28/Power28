//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数
//}
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#if 0 
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		count++;
		value = value&(value - 1);
	}
	return count;
}
int count_one_bits2(unsigned int value)
{
	int count = 0;
	while (value)
	{
		if (value % 2 == 1)
		{
			count++;
		}
		value = value / 2;
	}
	return count;
}
int count_one_bits3(unsigned int value)
{
	int count = 0;
	while (value)
	{
		if (value & 1 == 1)
		{
			count++;
		}
		value >>= 1;
	}
	return count;
}
int main()
{
	unsigned int num = 15;
	int ret = 0;
	ret = count_one_bits3(num);
	printf("%d二进制中 1 的个数为：%d\n", num, ret);
	system("pause");
	return 0;
}
#endif
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。

#if 0
int main()
{   //10   00000001001
	system("pause");
	return 0;
}
#endif
//3. 输出一个整数的每一位。
#if 0
void PrintEveryNumber(int num)
{
	if (num < 9)
	{  //1234
		return printf("%d ", num);
	}
	
	PrintEveryNumber(num / 10);
	return printf("%d ", num % 10);

}
int main()
{
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
	PrintEveryNumber(num);
	system("pause");
	return 0;
}
#endif

//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
#if 1
int CompareBit(int m, int n)
{
	int count = 0;
	int x = m^n;
	while (x)
	{
		count++;
		x &= (x - 1);
	}
	return count;

}
int main()
{
	int m = 1999;
	int n = 2299;
	int ret = 0;
	ret = CompareBit(m, n);
	printf("m和n有%d个比特位不同\n", ret);
	system("pause");
	return 0;
}
#endif
//5.写博客总结C语言操作符，博客链接发给我，并分享到群里。
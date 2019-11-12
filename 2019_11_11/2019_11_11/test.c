//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数
//}
//int count_one_bits(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;       
//		}
//		num /= 2;    
//	}
//	return count;
//}
//int count_one_bits2(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num & 1 == 1)
//		{
//			count++;
//		}
//		num >>= 1;
//	}
//	return count;
//}
//int count_one_bits3(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num &= (num - 1);
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = count_one_bits3(num);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//void print_odd_num(int num)
//{
//	int i = 0;
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//void print_ever_num(int num)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print_odd_num(num);
//	print_ever_num(num);
//	system("pause");
//	return 0;
//}
//3. 输出一个整数的每一位。
//void Print_number(int num)
//{
//	if (num < 9)
//		return printf("%d ", num);
//	
//	Print_number(num / 10);
//	return printf("%d ", num%10);
//}
//void Print_bit_number(int num)
//{
//	int i = 0;
//	for (i = 31; i >=0; i--)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Print_bit_number(num);
//	system("pause");
//	return 0;
//}
//
//
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子 :
//1999 2299
//int bit_count(int m, int n)
//{
//	int k = m^n;
//	int count = 0;
//	while (k)
//	{
//		count++;
//		k &= (k - 1);
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	scanf("%d %d", &m, &n);
//	ret = bit_count(m, n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

1.
5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
void forecast_result(int a, int b, int c, int d, int e)
{
	
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((2 == b) && (3 != a) || (3 == a) && (2 != b))
						{
							if ((2 == b) && (4 != e) || (4 == e) && (2 != b))
							{
								if ((1 == c) && (2 != d) || (2 == d) && (1 != c))
								{
									if ((5 == c) && (3 != d) || (3 == d) && (5 != c))
									{
										if ((4 == e) && (a != 1) || (a == 1) && (4 != e))
										{
											if ((a != b) && (a != c) && (a != d) && \
												(a != e) && (b != c) && (b != d) && \
												(b != e) && (c != d) && (c != e) && \
												(d != e))
											{
												printf("a= %d, b= %d, c= %d, d= %d, e= %d", a, b, c, d, e);
												printf("\n");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

}
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	forecast_result(a, b, c, d, e);
	system("pause");
	return 0;
}


2.
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
嫌疑犯的一个。以下为4个嫌疑犯的供词。
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。


int main()
{
	char mouder = 'A';
	for (; mouder <= 'D'; mouder++)
	{
		if ((mouder != 'A') + (mouder == 'C') + (mouder == 'D') + (mouder != 'D') == 3)
		{
			printf("%c\n", mouder);
		}
	}
	system("pause");
	return 0;
}

3.在屏幕上打印杨辉三角。
1
1 1
1 2 1
1 3 3 1
int main()
{
	int a[10][10] = { 0 };
	memset(a, 0, sizeof(a));
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{

			if (i == j || j == 0)
			{
				printf("%d ", a[i][j] = 1);
			}
			else
			{
				printf("%d ", a[i][j] = a[i - 1][j] + a[i - 1][j - 1]);
			}
			
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
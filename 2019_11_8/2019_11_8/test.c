#include<windows.h>
#include<stdio.h>
#pragma warning(disable:4996)
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数
//}
#if 0
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		if (value % 2 == 1)
		{
			count++;
		}
		value /= 2;	
	}
	return count;
}
int count_one_bits2(unsigned int value)
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
int count_one_bits3(unsigned int value)
{
	int count = 0;
	while (value)
	{
		count++;                   //10100100
		value &= (value - 1);      //10100011
	}
	return count;
}
int main()
{
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
	ret = count_one_bits3(num);
	printf("二进制中1的个数为：%d\n", ret);
	system("pause");
	return 0;
}
#endif
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列
//int main()
//{
//	int num = 15, i = 0;
//	scanf("%d", &num);
//	printf("奇数序列为：");
//	for (i = 31; i >= 0; i -= 2)  //也是控制32次（每个整型数按32位来算），只是从31位开始移动  
//	{
//		printf("%d ", (num >> i) & 1);  //第一次向右移动31位和1与得到第一位情况，每次变化2位，即可得到奇数位情况  
//	}
//	printf("\n");
//	printf("偶数序列为：");
//	for (i = 30; i >= 0; i -= 2)  //向右移动30位，再与1所得结果是原来数字的第二位，再移28位...  
//	{
//		printf("%d ", (num >> i) & 1);  //  
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
#if 0
void odd_number(int num)
{
	int i = 0;
	printf("%d的奇数位为:",num);
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}
void even_number(int num)
{
	int i = 0;
	printf("%d的偶数位为:",num);
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	odd_number(num);//打印奇数位
	even_number(num);//打印偶数位
	system("pause");
	return 0;
}
#endif
//输出一个整数的每一位。
#if 0
void every_number(int num)
{
	if (num < 9)
	{
		return printf("%d ", num);
	}
	every_number(num / 10);
	return printf("%d ", num % 10);
}
//输出一个整数的所有二进制位
void binary_number(int num)
{
	int i = 0;
	for (i = 31; i >= 0; i--)
	{
		printf("%d ", (num >> i) & 1);
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	//every_number(num);
	binary_number(num);
	system("pause");
	return 0;
}
#endif


//编程实现：
//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
#if 0
int count_bits(int n,int m)
{
	int s = n^m;
	int count = 0;
	while (s)
	{
		count++;
		s &= (s - 1);
	}
	return count;
}
int main()
{
	int n = 0;
	int m = 0;
	int ret = 0;
	scanf("%d %d", &n,&m);
	ret = count_bits(n,m);
	printf("%d和%d中有%d个比特位不同\n", n, m, ret);
	system("pause");
	return 0;
}
#endif
struct Stu
{
	char name[16];
	int age;
	char sex[5];
	double score;
};
void set_age1(struct Stu stu)
{
	stu.age = 18;
}
void set_age2(struct Stu* pStu)
{
	pStu->age = 18;
}
int main()
{
	struct Stu stu;
	struct Stu* pStu = &stu;//结构成员访问

	stu.age = 20;
	set_agel(stu);

	pStu->age = 20;
	set_age2(pStu);
	system("pause");
	return 0;
}
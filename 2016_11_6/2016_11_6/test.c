#include<stdio.h>
#include<Windows.h>
#if 0 
int main()
{
	int num1 = 1;
	int num2 = 2;
	printf("%d\n", num1&num2);//0
	printf("%d\n", num1|num2);//3
	printf("%d\n", num1^num2);//3

	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a = 10;
	int b = 20;
	printf("before: a = %d b = %d\n", a, b);
	a = a^b;
	b = a^b;//a^b^b
	a = a^b;//a^b^a  相同则为 0 相异则为1 
	printf("after: a = %d b = %d\n", a, b);

	system("pause");
	return 0;
}
#endif


//编写代码实现：求一个整数存储在内存中的二进制中1的个数
#if 0 
int main()
{
	int num = 10;
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
		{
			count++;
		}                   //1 2 4 8
		num = num / 2;   // 1010   10/2 = 5 0   5/2 = 2 1  2/2 = 1 0  1/2 = 0 0
	}
	printf("二进制中1的个数 = %d\n", count);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int num = 10;
	int count = 0;
	while (num)
	{
		num >>= 1;          //1010 0101  0010  0001
		if (num & 1 == 1)        //0001  0001  0001
		{
			count++;
		}
	}
	printf("二进制中1的个数 = %d\n", count);

	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int num = -1;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("二进制中1的个数 = %d\n", count);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int num = -1;
	int i = 0;
	int count = 0;
	while (num)
	{
		count++;       //1010  //1001 1000 
		num = num&(num - 1);   //1010 0111
	}
	printf("二进制中1的个数 = %d\n", count);
	

	system("pause");
	return 0;
}
#endif

#if 1
int main()
{
	int num = -1;
	int count = 0;
	while (num)
	{
		count++;            // 101000  100000
		num = num&(num - 1);// 100111  011111
	}
	printf("二进制中1的个数 = %d\n", count);

	system("pause");
	return 0;
}
#endif
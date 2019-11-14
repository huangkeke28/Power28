#include<Windows.h>
#include<stdio.h>
#if 1
int main()
{
	
	//整形提升  //1字节提升成4字节  //整型提升看自身类型
	//unsigned char c = -1;
	//printf("%u\n", (signed char)c);//1.变量在赋值时先要存进去 2.打印先把变量提升 3.把提升的结果再进行解释  //三个过程没有关系
	//printf("%d\n", c);  //自身是c
	//printf("%u\n", c);
	char c = -1;
	printf("%u\n", c);
	printf("%d\n", c);
	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
	//int x = 0x10;//十六进制
	//int x = 0x20;//十六进制  //二表示权值位16的一次方那个位
	//int x = 020;//前面带0表示八进制 //二表示权值位8的一次方 转化为十进制就是2乘8的一次方
	//int x = 20;//前面不带零表示十进制
	//printf("%d\n", x);
	
	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
	char a = 0xb6;//1011 0110
	short b = 0xb600;//1011 0110 0000 0000
	int c = 0xb6000000;//1011 0110 0000 0000 0000 0000 0000 0000
	if (a == 0xb6)// 1111 1111 1111 1111 1111 1111 1011 0110
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c\n");
	printf("%u\n", a);
	printf("%u\n", b);
	printf("%u\n", c);

	system("pause");
	return 0;
}
#endif

//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//
//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//			student a am i
//			i ma a tneduts
//			i am a student
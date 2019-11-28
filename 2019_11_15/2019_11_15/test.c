#include<stdio.h>
#include<windows.h>
#if 1
int main()
{
	char a = 3;  
	char b = 127;     
	char c = a + b;   
	printf("%d\n", c);//-126
	// 0000 0000 0000 0000 0000 0000 0000 0011
	// 0000 0000 0000 0000 0000 0000 0111 1111
	//
	// 0000 0000 0000 0000 0000 0000 0000 0011 -a
	// 0000 0000 0000 0000 0000 0000 0111 1111 -b
	// 0000 0000 0000 0000 0000 0000 1000 0010 -a + b
	// 1000 0010 -c
	// 1111 1111 1111 1111 1111 1111 1000 0010 -c //补码
	// 减一再去打 取反加一得到源码 减一取反得到补码 // 补码取反加一就是源码 源码取反加一就是补码
	// 1000 0000 0000 0000 0000 0000 0111 1110
	//-126
	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a\n");
	if (b == 0xb600)
		printf("b\n");
	if (c == 0xb6000000)
		printf("c\n");
	system("pause");
	return 0;
}
#endif

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(!c));//4
	system("pause");
	return 0;
}
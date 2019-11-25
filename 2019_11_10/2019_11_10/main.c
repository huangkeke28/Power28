//递归
//1.递归程序的出口
//2.将大问题划分成其子问题（比较小的问题），并且子问题与原问题具有相同的解法
#include<windows.h>
#include<stdio.h>
#if 0
int Fac(int N)
{
	if (0 == N)
		return 1;
	return Fac(N - 1)*N;
}
int main()
{
	printf("%d\n", Fac(0));
	system("pause");
	return 0;
}
#endif
//{
//	if (mineCount(mine, x, y) == '0')
//	{
//		show[x][y] = '0';
//		int i = 0;
//		int j = 0;
//		for (i = x - 1; i <= x + 1; i++)
//		{
//			for (j = y - 1; j <= y + 1; j++)
//			{
//				if (show[i][j] == '*')
//					openBoard(mine, show, i, j);
//			}
//		}
//	}
//	else
//		show[x][y] = mineCount(mine, x, y);
//}
//
//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四； 
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//I have a big big drame;
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//先想办法输出所有情况
#if 0
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
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
						if (((2 == b)&&(3 != a) || (3 == a)&&( 2!= b))== 1)
						{
							if (((2 == b)&&(4 != e) || (4 == e)&&(2 != b)) == 1)
							{
								if (((1 == c)&&(2 !=d) || (2 == d)&&(1 != c)) == 1)
								{
									if (((5 == c)&&(3!=d) || (3 == d)&&(5 != c)) == 1)
									{
										if (((4 == e)&&(a != 1) || (a == 1)&&( 4 != e))== 1)
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
	system("pause");
	return 0;
}
#endif

//2.
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
int main()
{
	//1表示是否为凶手
	int a = 0, b = 0, c = 0, d = 0;
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			for (c = 0; c < 2; c++)
			{
				for (d = 0; d < 2; d++)
				{     // a           b           c               d
					
					if ((a==0||c==1||d==1||d==0)==3)
					{
						printf("a= %d, b= %d, c= %d, d= %d\n", a, b, c, d);
					}
				}
			}
		}
	}


	system("pause");
	return 0;
}
//3.在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1

#if 0

//strlen和sizeof区别
int Strlen(char* str)
{
	//字符串：字符的集合+特色==特殊要求：最后一个字符值符\0结尾
	//a~z:97 - 122 
	//A~Z:65 - 90
	//1~9: 1 - 9
	//空格:32 
	// 0:0
	//'0': 48 '9': 57 
	//'\0': 0
	int count = 0;
	while (*str)
	{
		++count;
		++str;

	}
	return count;
}
int Strlens(int *str)
{
	if (*str == '\0')
		return 0;
		return 1 + Strlens(str+1);
}
void PrintNum(int a)
{
	if (a < 9)
		printf("%d ", a);
	else
	{
		PrintNum(a / 10);
		printf("%d ", a % 10);
	}
}
int main()
{
	int a = 1234;
	PrintNum(a);
	//Strlens("hello");
	//printf("%d\n", Strlens("hello"));
	system("pause");
	return 0;
}
#endif
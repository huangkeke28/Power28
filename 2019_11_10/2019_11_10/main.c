//�ݹ�
//1.�ݹ����ĳ���
//2.�������⻮�ֳ��������⣨�Ƚ�С�����⣩��������������ԭ���������ͬ�Ľⷨ
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
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ� 
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//I have a big big drame;
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//����취����������
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
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
int main()
{
	//1��ʾ�Ƿ�Ϊ����
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
//3.����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1

#if 0

//strlen��sizeof����
int Strlen(char* str)
{
	//�ַ������ַ��ļ���+��ɫ==����Ҫ�����һ���ַ�ֵ��\0��β
	//a~z:97 - 122 
	//A~Z:65 - 90
	//1~9: 1 - 9
	//�ո�:32 
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
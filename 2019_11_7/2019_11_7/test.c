//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ��
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
	printf("%d�������� 1 �ĸ���Ϊ��%d\n", num, ret);
	system("pause");
	return 0;
}
#endif
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�

#if 0
int main()
{   //10   00000001001
	system("pause");
	return 0;
}
#endif
//3. ���һ��������ÿһλ��
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

//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
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
	printf("m��n��%d������λ��ͬ\n", ret);
	system("pause");
	return 0;
}
#endif
//5.д�����ܽ�C���Բ��������������ӷ����ң�������Ⱥ�
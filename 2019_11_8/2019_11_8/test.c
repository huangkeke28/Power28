#include<windows.h>
#include<stdio.h>
#pragma warning(disable:4996)
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ��
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
	printf("��������1�ĸ���Ϊ��%d\n", ret);
	system("pause");
	return 0;
}
#endif
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ��������������
//int main()
//{
//	int num = 15, i = 0;
//	scanf("%d", &num);
//	printf("��������Ϊ��");
//	for (i = 31; i >= 0; i -= 2)  //Ҳ�ǿ���32�Σ�ÿ����������32λ���㣩��ֻ�Ǵ�31λ��ʼ�ƶ�  
//	{
//		printf("%d ", (num >> i) & 1);  //��һ�������ƶ�31λ��1��õ���һλ�����ÿ�α仯2λ�����ɵõ�����λ���  
//	}
//	printf("\n");
//	printf("ż������Ϊ��");
//	for (i = 30; i >= 0; i -= 2)  //�����ƶ�30λ������1���ý����ԭ�����ֵĵڶ�λ������28λ...  
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
	printf("%d������λΪ:",num);
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}
void even_number(int num)
{
	int i = 0;
	printf("%d��ż��λΪ:",num);
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
	odd_number(num);//��ӡ����λ
	even_number(num);//��ӡż��λ
	system("pause");
	return 0;
}
#endif
//���һ��������ÿһλ��
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
//���һ�����������ж�����λ
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


//���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
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
	printf("%d��%d����%d������λ��ͬ\n", n, m, ret);
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
	struct Stu* pStu = &stu;//�ṹ��Ա����

	stu.age = 20;
	set_agel(stu);

	pStu->age = 20;
	set_age2(pStu);
	system("pause");
	return 0;
}
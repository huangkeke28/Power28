#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832

unsigned int reverse_bit(unsigned int value)
{
	int sum = 0;
	int ret = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		ret = ((value >> i) & 1)*pow(2, 31 - i); 
		sum += ret;
	}
	return sum;
}

int main()
{
	unsigned int num = 1006;
	unsigned int ret = 0;
	ret = reverse_bit(num);
	printf("%u\n", ret);
	system("pause");
	return 0;
}

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = (a >> 1 ) + (b >> 1);
//	int c = (a + b) >> 1;
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//int main()
//{
//	int arr[] = { 1, 3, 4, 5, 6, 7, 8, 1, 3, 5, 6, 7, 8 };
//	int i = 0;
//	int k = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		k ^= arr[i];
//	}
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}
	//4.
	//��һ���ַ����������Ϊ:"student a am i",
	//			���㽫��������ݸ�Ϊ"i am a student".
	//			Ҫ��
	//			����ʹ�ÿ⺯����
	//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

	//			student a am i
	//			i ma a tneduts
	//			i am a student
//int main()
//{
//	char a1[] = "student";
//	char a2[] = "a";
//	char a3[] = "am";
//	char a4[] = "i";
//	char* arr[] = { &a1, &a2, &a3, &a4 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 7;j++)
//		printf("%c", *arr[i]+j);
//	}
//	system("pause");
//	return 0;
//}





//void reverse_all(char arr[])
//{
//	//�����������
//	//���ַ�
//	char *start = arr;
//	char* pc = arr;
//	while (*pc != '\0')
//	{
//		pc++;
//	}
//	char* end = pc;
//	end--;//ȷ����β�ַ���λ��
//	while (start < end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
////дһ���Կո�Ϊ�ָ�����ÿ���ַ��������ַ����õĺ���
//void reverse_every(char* arr)
//{
//	while (*arr != '\0')
//	{
//		char* start = arr;
//		char* end = arr;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		end--;
//		while (start < end)
//		{
//			char temp = *end;
//			*end = *start;
//			*start = temp;
//			start++;
//			end--;
//		}
//		while (*arr != ' ' && *arr != '\0')
//		{
//			arr++;
//		}
//		if (*arr != '\0')
//		{
//			++arr;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	printf("%s\n", arr);
//	reverse_all(arr);
//	printf("%s\n", arr);
//	reverse_every(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	printf("Hello World!!!!\n");
//	system("pause");
//	return 0;
//}
//
//1.��ɲ�������Ϸ��
// 1 �˵� 2 ����Ϸ
//#include<stdio.h>
//#include<Windows.h>
//#pragma warning(disable:4996)
//#include<time.h>
//void menu()
//{
//	printf("########################\n");
//	printf("##  1. play   2.exit  ##\n");
//	printf("########################\n");
//}
//void game()
//{
//	int s = rand() % 100 + 1;
//	while (1)
//	{
//		printf("��������Ҫ�µ����֣�\n");
//		printf(">");
//		int i = 0;
//		scanf("%d", &i);
//		if (i > s)
//		{
//			printf("���´���!\n");
//		}
//		else if (i < s)
//		{
//			printf("����С�ˣ�\n");
//		}
//		else
//		{
//			printf("��ϲ�����¶��ˣ�ֵΪ%d\n", s);
//			break;
//		}
//	}
// }
//int main()
//{
//	int flag = 1;
//	srand((unsigned int)time(NULL));
//	while (flag)
//	{
//
//		menu();
//		printf("��ѡ����Ҫ���Ĳ�����\n");
//		printf(">");
//		int x;
//		scanf("%d", &x);
//		switch (x)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("�ټ�\n");
//			flag = 0;
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//#include<stdio.h>
//#include<Windows.h>
//#include<string.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 123, 134, 166, 177, 199 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = len -1;
//	int x = 0;
//	printf("��������Ҫ���ҵ����֣�\n");
//	printf(">");
//	scanf("%d", &x);
//
//	while (left <= right)
//	{
//		/*int x = 0;
//		printf("��������Ҫ���ҵ����֣�\n");
//		printf(">");
//		scanf("%d", &x);*/
//		int mid = (left + right) / 2;
//		if (x > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("��Ҫ���ҵ������±�Ϊ��%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("���������Ҫ���ҵ�����û��\n");
//		printf("���� -1\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//#include<stdio.h>
//#include<Windows.h>
//#include<string.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int i = 0;
//	char arr[32];
//	int count = 2;
//	
//	for (i = 3; i > 0; i--)
//	{
//		
//		printf("��������������");
//		printf(">");
//		
//		scanf("%s", arr);
//		if (strcmp(arr, "123567") == 0)
//		{
//			printf("����ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("����������ٴ����룬�㻹��%d�λ���\n", count);
//			count--;
//			
//		}
//
//	}
//
//	system("pause");
//	return 0;
//}
//
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
//#include<stdio.h>
//#include<stdlib.h>
//
//#include<Windows.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//
//
//		if ((ch >= 'A') && ('Z' >= ch))
//		{
//			putchar(ch + 32);
//		}
//		else if ((ch >= 'a') && ('z' >= ch))
//		{
//			putchar(ch - 32);
//		}
//		else
//		{
//
//		}
//	}
//	system("pause");
//	return 0;
//}

//5.�ػ�����
#include<stdio.h>

#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	char hh[32];
	system("shutdown -s -t 60 ");
	while (1)
	{

		printf("��ĵ��Խ���60���ڹػ�������������Ұ��㣬ȡ���˲�����\n");
		printf(">");
		scanf("%s", hh);
		if (strcmp(hh, "�����Ұ���") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	system("pause");
	return 0;
}
//����


//��ɨ����Ϸ���
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//#include<stdio.h>
//#include<Windows.h>
//void reverse_string(char arr[])
//{
//	if (*arr != '\0')
//	{
//		reverse_string(arr+1);
//		printf("%c",*arr);
//	}
//}
//int main()
//{
//	printf("��ʼ�ַ���:>\n");
//	char arr[] = "asdfgh";
//	printf("%s\n", arr);
//	printf("�ַ����ַ��������к�:>\n");
//	reverse_string(arr);
//	printf("\n");
//	system("pause");
//	return 0;
//}

//#include<Windows.h>
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//reverse_string(char arr[])
//{
//	int n = 0;
//	char temp;
//	char* q = arr;
//	while (*arr != 0)
//	{
//		n++;
//		arr++;
//	}
//	if (n > 1)
//	{
//		temp = q[0];
//		q[0] = q[n - 1];
//		q[n - 1] = '\0';
//		reverse_string(q + 1);
//			q[n - 1] = temp;
//	}
//	return q;
//}
//
//int main()
//{
//	char arr[] = "aasadssf";
//	reverse_string(arr);
//	system("pause");
//	return 0;
//}

//��ŵ������ a=A b =B c =C
#include<Windows.h>
#include<stdio.h>
#pragma warning(disable:4996)
void hanio(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("�ѵ�%d�����Ӵ�%c--->%c\n",n, a, c);
	}
	else
	{
		hanio(n - 1, a, c, b);
		printf("�ѵ�%d�����Ӵ�%c--->%c\n",n, a, c);
		hanio(n - 1, b, a, c);

	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	char a = 'A';
	char b = 'B';
	char c = 'C';
	hanio(n,'A','B','C');
	system("pause");
	return 0;
}
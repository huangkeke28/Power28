//任务


//将扫雷游戏完成
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
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
//	printf("初始字符串:>\n");
//	char arr[] = "asdfgh";
//	printf("%s\n", arr);
//	printf("字符串字符反向排列后:>\n");
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

//汉诺塔问题 a=A b =B c =C
#include<Windows.h>
#include<stdio.h>
#pragma warning(disable:4996)
void hanio(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("把第%d个盘子从%c--->%c\n",n, a, c);
	}
	else
	{
		hanio(n - 1, a, c, b);
		printf("把第%d个盘子从%c--->%c\n",n, a, c);
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
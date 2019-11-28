//操作符的优先级
//结合性
//是否控制求值顺序
#include<Windows.h>
#include<stdio.h>
#include<string.h>
int my_strlens(char* str)
{
	char *end = str;
	while (*end)
	{
		end++;
	}
	return end - str;
}

int main()
{
	//
	//int a = 0;
	//int *p = &a;
	//*p;//指针（就是地址） 指针变量
	//int a = 10;
	//int *pa = &a;//指针变量
	//char c = 'w';
	//char *pc = &c;
	/*printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double *));
    */
	//int a = 0x11223344;
	//int *pa = &a;
	//*pa = 0;
	//char *pc = &a;11
	//*pc = 0;
	//printf("%d\n", a);
	//int arr[10] = { 0 };
	//int i = 0;
	//int *p = NULL;
	//for (i = 0; i < 10; i++)
	//{
	//	arr[i] = i;
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//for (p = arr; p < &arr[10]; p++)
	//{
	//	*p = i;
	////}
	//char arr[] = "abcdef";
	//int len = my_strlens(arr);
	//printf("%d\n", len);
	//
	//strlen("adv");
	/*int arr[10] = { 0 };
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr + 1);*/

	int arr[10] = { 0 };
	int *p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *p++);
	}
	system("pause");
	return 0;
}
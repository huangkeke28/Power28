#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<assert.h>
#pragma warning(disable:4996)
int Strlen(char* arr)
{
	int count = 0;
	while (*arr++)
	{
		count++;
	}
	return count;
}
void reverse(char* arr)
{
	int len = Strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);
	*(arr + len - 1) = '\0';
	if (Strlen(arr + 1) >= 2)
	{
		reverse(arr + 1);
	}
	*(arr + len - 1) = tmp;
}
int main()
{
	char arr[] = "asdef";
	int ret = 0;
	printf("%s\n", arr);

	/*ret = Strlen(arr);
	printf("%d\n", ret);*/
	reverse(arr);
	printf("%s\n", arr);
	system("pause");
}
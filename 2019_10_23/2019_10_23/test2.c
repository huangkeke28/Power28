//ººÅµËşÎÊÌâ
#include<Windows.h>
#include<stdio.h>
#pragma warning(disable:4996)
void hanoi(int n, char a, char b, char c)
{
	if (n <= 1)
	{
		printf("%c-->%c", a, c);
	}
	else
	{
		hanoi(n-1,a,c,b)
	}
}
int main()
{
	int n = 0;
	char a = 'A';
	char b = 'B';
	char c = 'C';
	scanf("%d", &n);
	hanoi(n, a, b, c);
	system("pause");
	return 0;
}
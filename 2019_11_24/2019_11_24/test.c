#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k >= 1)
	{
		return n*Pow(n, k - 1);
	}
}

int main()
{
	//╪ссм
	int n = 2;
	int k = 3;
	int ret = Pow(n, k);
	printf("ret = %d\n", ret);
	system("pause");
	return 0;
}
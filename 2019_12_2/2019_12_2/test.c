#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void Partion(int array[], int size)
{
    // 借助辅助内存空间的方式管理
	// 给两个指针  
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		//从前往后找偶数，找到之后停止
		//从后往前找奇数，找到之后停止
		while (0 != (array[left] & 1))
		{
		
			left++;
		}
		while (1 == (array[right] & 1))
			{
			
				right--;
			}
			int temp = array[left];
			array[left] = array[right];
			array[right] = temp;
		}
	}

void PrintArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
int main()
{
	int array[] = { 1, 2, 3, 4, 5, 66, 7 };
	PrintArray(array, sizeof(array) / sizeof(array[0]));
	Partion(array, sizeof(array) / sizeof(array[0]));
	PrintArray(array, sizeof(array) / sizeof(array[0]));
	
	system("pause");
	return 0;
} 
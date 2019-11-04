#include"game.h"
void Menu()
{
	printf("#################################\n");
	printf("####  欢迎来到我的游戏厅！  ####\n");
	printf("#################################\n");
	printf("####    1.Play       0.EXIT  ####\n");
	printf("#################################\n");
	printf("#########     请选择！   ########\n");


}
int Guess()
{
	int result = 0;
	result = rand() % 2;
	int g = 0;
	printf("硬币已抛，请猜正反面：\n");
	scanf("%d", &g);
	if (result == g)
	{
		printf("你猜对了,你先走\n");
		return 1;
	}
	printf("你猜错了，电脑先走\n");
	return 0;
}

void game()
{
	char judge = 0;
	srand((unsigned long)time(NULL));
	char board[ROW][COL] = { 0 };
	initBoard(board,ROW,COL);
	int who=Guess();
	displayBoard(board, ROW, COL);
	do{
		switch (who)
		{
		case 1:
			playerMove(board, ROW, COL);
			who = 0;
			break;
		case 0:
			computerMove(board, ROW, COL);
			who = 1;
			break;
		default:
			break;
		}
		displayBoard(board, ROW, COL);

		judge = isWin(board,ROW,COL);
		if (judge != 'C')
		{
			break;
		}
	} while (1);
	switch (judge)
	{
	case '*':
		printf("Congratulations! You are win!\n");
		break;
	case '#':
		printf("Computer win !\n");
		break;
	case 'T':
		printf("It ends in a draw !\n");
		break;
	default:
		break;
	}
}
void test()
{
	int input = 0;
	do{
	    Menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Bye Bye !\n");
			break;
		default:
			printf("Enter error! Please try again!\n");
			break;
		}
	} while (input);
}




int main()
{
	test();
	system("pause");
	return 0;
}


//冒泡排序
//降序
#if 0
void bubbleSort(int* arr, int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{//11 2 32 
			if (arr[j]<arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void ergodicArr(int* arr, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 12, 43, 542, 132, 54, 7, 98, 341, 32, 8, 23 };
	int len = sizeof(arr) / sizeof(arr[0]);
	ergodicArr(arr, len);
	bubbleSort(arr, len);
	ergodicArr(arr, len);
	system("pause");
	return 0;
}
#endif
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
void game()
{
	srand((unsigned long)time(NULL));
	char judge = 0;
	char board[ROW][COL] = { 0 };
	initBoard(board,ROW,COL);
	displayBoard(board,ROW,COL);
	do
	{
		playerMove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		judge = isWin(board,ROW,COL);
		if (judge != 'C')
		{
			break;
		}
		computerMove(board, ROW, COL);
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
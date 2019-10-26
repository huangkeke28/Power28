#include"game.h"

void game()
{
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	initBoard(mine, ROWS, COLS, '0');
	initBoard(show, ROWS, COLS, '*');
	dispalyBoard(show, ROW, COL);
	//²¼ÖÃÀ×

	//ÅÅÀ×
}

void menu()
{
	printf("##########################\n");
	printf("#####     1.play    ######\n");
	printf("#####     0.exit    ######\n");
	printf("##########################\n");

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("please choose!\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("bye bye !\n");
			break;
		default:
			printf("enter error,please try again!\n");
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
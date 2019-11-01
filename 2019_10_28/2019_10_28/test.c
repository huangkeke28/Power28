#include"game.h"
void menu()
{
	printf("####################################\n");
	printf("##########     1.play   ############\n");
	printf("##########     0.exit   ############\n");
	printf("####################################\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initBoard(mine, ROWS, COLS,'0');
	initBoard(show, ROWS, COLS,'*');
	displayBoard(show, ROW, COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("再见！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
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
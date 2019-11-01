#include"game.h"
void menu()
{
	printf("##########################\n");
	printf("###欢迎来到我的扫雷游戏###\n");
	printf("##########################\n");
	printf("###  1.game    0.exit  ###\n");
	printf("##########################\n");
	printf("###       请选择：     ###\n");

}
void game()
{
	srand((unsigned long)time(NULL));
	char mine[ROW][COL] = { 0 };
	char show[ROW][COL] = { 0 };
	memset(mine, '0', sizeof(mine));
	memset(show, '*', sizeof(show));
	//initBoard(mine, ROW, COL,'0');
	//initBoard(show, ROW, COL,'*');
	layMines(mine, ROW, COL,Number);
	displayBoard(show, ROW, COL);
	//displayBoard(mine, ROW, COL);

	removeMines(mine,show,ROW,COL);
}
void test()
{
	int select = 0;
	do
	{
		menu();
		scanf("%d", &select);
		switch (select)
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
	} while (select);
}

int main()
{
	test();
	system("pause");
	return 0;
}
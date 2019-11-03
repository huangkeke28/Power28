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
	int x_no = 0;
	int y_no = 0;
	srand((unsigned long)time(NULL));
	char mine[ROW][COL] = { 0 };
	char show[ROW][COL] = { 0 };
	memset(mine, '0', sizeof(mine));
	memset(show, '*', sizeof(show));
	layMines(mine, ROW, COL,Number,&x_no,&y_no);
	displayBoard(show, ROW, COL);
    removeMines(mine,show,ROW,COL,&x_no,&y_no);
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
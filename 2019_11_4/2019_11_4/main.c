#include"game.h"
#if 1
void Menu()
{
	printf("#################################\n");
	printf("##      欢迎来到我的游戏厅     ##\n");
	printf("#################################\n");
	printf("##       1.game    2.exit      ##\n");
	printf("#################################\n");
}

void game()
{
	int x_p = 0;
	int y_p = 0;
	char mine[ROW][COL] = { 0 };
	char show[ROW][COL] = { 0 };
	memset(mine, '0', sizeof(mine));
	memset(show, '*', sizeof(show));
	setMines(mine,ROW,COL,MINE,&x_p,&y_p);//埋雷
	displayBoard(show, ROW, COL);//展示游戏界面
	findMines(mine,show,ROW,COL,&x_p,&y_p);//扫雷
}
void test()
{
	srand((unsigned long)time(NULL));
	int flag = 0;
	while (!flag)
	{
		int select = 0;
		Menu();
		printf("请选择:\n");
		printf(">");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			flag = 1;
			break;
		default:
			printf("你输入有误，请重新输入！\n");
			break;
		}
	}
	printf("再见！欢迎下次再玩！\n");
}
int main()
{
	test();
	system("pause");
	return 0;
}

#endif

#if 0
//下棋 一开始猜数字 猜对了 玩家走 猜不对 电脑走

void Menu()
{
	printf("#################################\n");
	printf("##      欢迎来到我的游戏厅     ##\n");
	printf("#################################\n");
	printf("##       1.game    2.exit      ##\n");
	printf("#################################\n");
}
void game()
{
	int input = 0;
	printf("猜拳了，请猜0或1，猜对了你先走，猜错了电脑走\n");
	int x = rand() % 2;
	scanf("%d", &input);
	while (1)
	{
		if (x == input)
		{
			playerMove();
			continue;
		}
		else
		{
			computerMove();
			continue;
		}
	}
}
void test()
{
	srand((unsigned long)time(NULL));
	int flag = 0;
	while (!flag)
	{
		int select = 0;
		Menu();
		printf("请选择:\n");
		printf(">");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			flag = 1;
			break;
		default:
			printf("你输入有误，请重新输入！\n");
			break;
		}
	}
	printf("再见！欢迎下次再玩！\n");
}
int main()
{
	test();
	system("pause");
	return 0;
}
#endif
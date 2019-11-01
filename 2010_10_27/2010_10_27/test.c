#include"game.h"
void menu()
{
	printf("###########################\n");
	printf("#####     1.game      #####\n");
	printf("#####     0.exit      #####\n");
	printf("###########################\n");
}
void game()
{
	int mine[ROWS][COLS] = {};
	printf("玩游戏\n");
}
void test()
{
	int input = 0;
	do{
		menu();
		printf("请选择:>\n");
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
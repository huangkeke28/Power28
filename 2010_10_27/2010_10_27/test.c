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
	printf("����Ϸ\n");
}
void test()
{
	int input = 0;
	do{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�ټ���\n");
			break;
		default:
			printf("����������������룡\n");
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
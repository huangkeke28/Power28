#include"game.h"
#if 1
void Menu()
{
	printf("#################################\n");
	printf("##      ��ӭ�����ҵ���Ϸ��     ##\n");
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
	setMines(mine,ROW,COL,MINE,&x_p,&y_p);//����
	displayBoard(show, ROW, COL);//չʾ��Ϸ����
	findMines(mine,show,ROW,COL,&x_p,&y_p);//ɨ��
}
void test()
{
	srand((unsigned long)time(NULL));
	int flag = 0;
	while (!flag)
	{
		int select = 0;
		Menu();
		printf("��ѡ��:\n");
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
			printf("�������������������룡\n");
			break;
		}
	}
	printf("�ټ�����ӭ�´����棡\n");
}
int main()
{
	test();
	system("pause");
	return 0;
}

#endif

#if 0
//���� һ��ʼ������ �¶��� ����� �²��� ������

void Menu()
{
	printf("#################################\n");
	printf("##      ��ӭ�����ҵ���Ϸ��     ##\n");
	printf("#################################\n");
	printf("##       1.game    2.exit      ##\n");
	printf("#################################\n");
}
void game()
{
	int input = 0;
	printf("��ȭ�ˣ����0��1���¶��������ߣ��´��˵�����\n");
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
		printf("��ѡ��:\n");
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
			printf("�������������������룡\n");
			break;
		}
	}
	printf("�ټ�����ӭ�´����棡\n");
}
int main()
{
	test();
	system("pause");
	return 0;
}
#endif
//#include"game.h"
//void menu()
//{
//	printf("##########################\n");
//	printf("###1.play       0.Exit ###\n");
//	printf("##########################\n");
//
//}
//void game()
//{
//	char ret;
//	int flag = 0;
//	char Board[ROW][COL];
//	initBoard(Board, ROW, COL);
//	displayBoard(Board, ROW, COL);
//	while (1)
//	{
//		//displayBoard(Board, ROW, COL);
//		playerMove(Board, ROW, COL);
//		displayBoard(Board, ROW, COL);
//		ret = isWin(Board, ROW, COL);
//		if (ret != 'C')
//			break;
//		computerMove(Board, ROW, COL);
//		displayBoard(Board, ROW, COL);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == '*')
//		printf("���Ӯ��\n");
//	else if (ret == '#')
//		printf("����Ӯ��\n");
//	else
//		printf("ƽ�֣�\n");
//}
//void test()
//{
//	int input = 0;
//	do{
//		menu();
//		printf("���������ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�ټ�!\n");
//			break;
//		default:
//			printf("����������������룡\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	test();
//	system("pause");
//	return 0;
//}
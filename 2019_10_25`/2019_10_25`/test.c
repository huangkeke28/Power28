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
//		printf("玩家赢！\n");
//	else if (ret == '#')
//		printf("电脑赢！\n");
//	else
//		printf("平局！\n");
//}
//void test()
//{
//	int input = 0;
//	do{
//		menu();
//		printf("请输入你的选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("再见!\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
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
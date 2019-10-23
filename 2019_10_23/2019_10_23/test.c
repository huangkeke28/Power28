//#include"game.h"
//
//int main()
//{
//	char arr[ROW][COL] ;
//	int flag = 0;
//	while (!flag)
//	{
//		menu();
//		int n = 0;
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			InitArry(arr, ROW, COL);
//			InitBoard(arr, ROW, COL);
//			PlayerMove(arr, ROW, COL);
//			InitBoard(arr, ROW, COL);
//			break;
//		case 2:
//			printf("bye bye!\n");
//			flag = 1;
//			break;
//		
//		default:
//			printf("input erroe!\n");
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//
//#include"game.h"
////测试游戏的整个逻辑
//
//
//void menu()
//{
//	printf("######################\n");
//	printf("#####1. play game#####\n");
//	printf("#####0. exit     #####\n");
//	printf("######################\n");
//}
//void game()
//{
//	char board[ROW][COL] ;
//	char ret = 0;
//	InitBoard(board,ROW,COL);
//	DisplayBoard(board,ROW,COL);
//	while (1)
//	{
//		PlayerMove(board,ROW,COL);
//		DisplayBoard(board, ROW, COL);
//		//判断
//		ret = IsWin(board,ROW,COL);
//		if (ret != 'c')
//			break;
//		ComputerMove(board,ROW,COL);
//		DisplayBoard(board, ROW, COL);
//		//判断
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'c')
//			break;
//	}
//	if (ret == '#')
//	{
//		printf("玩家赢\n");
//	}
//	else if (ret == '*')
//	{
//		printf("电脑赢\n");
//	}
//	else if (ret == 'P')
//	{
//		printf("平局\n");
//	}
//}
//void test()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}
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
////������Ϸ�������߼�
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
//		//�ж�
//		ret = IsWin(board,ROW,COL);
//		if (ret != 'c')
//			break;
//		ComputerMove(board,ROW,COL);
//		DisplayBoard(board, ROW, COL);
//		//�ж�
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'c')
//			break;
//	}
//	if (ret == '#')
//	{
//		printf("���Ӯ\n");
//	}
//	else if (ret == '*')
//	{
//		printf("����Ӯ\n");
//	}
//	else if (ret == 'P')
//	{
//		printf("ƽ��\n");
//	}
//}
//void test()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������ѡ��\n");
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
//
//#include"game.h"
//void menu()
//{
//	printf("#############################\n");
//	printf("#####     1. PlayGame     ###\n");
//	printf("#####     2. Exit         ###\n");
//	printf("#############################\n");
//	printf("#############################\n");
//
//}
//void InitArry(char arr[ROW][COL],int row,int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//	//memset(&barr[0][0],' ',row*col*sizeof[0][0]);
//}
//void InitBoard(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);
//		if (i < row - 1)
//		{
//			printf("---|---|---\n");
//		}
//
//	}
//}
//void PlayerMove(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("玩家走>\n");
//	while (1)
//	{
//		printf("请输入你要走的位置>");
//		scanf("%d%d", &i, &j);
//		if (i>=1&&i<=row&&j>=1&&j<=row)
//		{
//			//合法
//			if(arr[i - 1][j - 1] != ' ')
//			{
//				printf("该位置被占用，请重新输入\n");
//			}
//			else
//			{
//				arr[i - 1][j - 1] = '#';
//				break;
//			}
//		
//		}
//		else
//		{
//			"输入错误\n";
//		}
//		
//	}
//}

//游戏的实现
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
	//memset(board,' ',row*col*sizeof(board[0][0]));//1目标(起始地址) 2初始化内容 3初始化的字节
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i<row -1)
		printf("---|---|---\n");
	}
	//int i = 0;
	//
	//for (i = 0; i < row; i++)
	//{
	//	int j = 0;
	//	for (j = 0; i < col; j++)
	//	{
	//		printf(" %c ",board[i][j]);
	//		if (j < col - 1)
	//			printf("|");
	//	}
	//	printf("\n");
	//	if (i < row - 1)
	//	{
	//		for (j = 0; j < col; j++)
	//		{
	//			printf("---");
	//			if (j < col - 1)
	//				printf("|");
	//		}
	//	}
	//	printf("\n");
	//}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入走的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//合法
			if (board[x - 1][y - 1] != ' ')
			{
				printf("该坐标被占用，请重新输入!\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ');
		{
			board[x][y] = '&';
			break;
		}
	}
}
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[1][1] == board[0][0] && board[2][2] == board[1][1] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//平局
	if (IsFull(board,row,col))
	{
		return 'P';
	}
	//游戏继续
	return 'c';
}
#include"game.h"
void initBoard(char board[ROW][COL], int row, int col)
{
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < row; i++)
	//{
	//	for (j = 0; j < col; j++)
	//		board[i][j] = ' ';
	//}
	memset(board, ' ', row*col*sizeof(board[0][0]));
}
void displayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");

		
	}
}
void playerMove(char board[ROW][COL], int row, int col)
{
	
	int i = 0;
	int j = 0;
	printf("玩家走\n");
	while (1)
	{
		printf("请输入你要走的坐标：>");
		scanf("%d%d", &i, &j);
		if (i > 0 && i<row + 1 && j>0&& j<col + 1)
		{
			if (board[i - 1][j - 1] != ' ')
			{
				printf("该位置已被占用\n");
			}
			else
			{
				board[i -1][j - 1] = '*';
				break;
			}
		}
		else
		{
			printf("输入坐标非法,请重新输入\n");
		}
	}
}
void computerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("电脑走：>\n");

	while (1)
	{
		i = rand() % row ;
		j = rand() % col ;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}
static int isFull(char board[ROW][COL], int row, int col)
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
char isWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	for (j = 0; i < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
			return board[0][j];
	}
	if (board[1][1] == board[0][0] && board[2][2] == board[1][1] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (isFull(board, ROW, COL))
	{
		return 'P';
	}
	return 'C';
}

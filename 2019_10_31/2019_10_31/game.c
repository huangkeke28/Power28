#include"game.h"
void initBoard(char board[ROW][COL], int row, int col)
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
}
void displayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void playerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("Player Move:\n");
	while (1)
	{
		printf(">");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("该位置被占用，请重新输入坐标\n");
			}
		}
		else
		{
			printf("输入位置非法！请重新输入\n");
		}
	}
}
int isFull(char board[ROW][COL], int row, int col)
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
		if (board[i][1] == board[i][0] &&\
			board[i][1] == board[i][2] &&\
			board[i][1] != ' ')
			return board[i][1];
	}
	for (j = 0; i < col; j++)
	{
		if (board[0][j] == board[1][j] &&\
			board[1][j] == board[2][j] &&\
			board[0][j] != ' ')
			return board[0][j];
	}
	if (board[0][0] == board[1][1] &&\
		board[1][1] == board[2][2] &&\
		board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && \
		board[1][1] == board[2][0] && \
		board[1][1] != ' ')
		return board[1][1];
	if (isFull(board, ROW, COL))
		return 'T';
	return 'C';


}

void computerMove(char board[ROW][COL], int row, int col)
{
	printf("Computer Move:\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
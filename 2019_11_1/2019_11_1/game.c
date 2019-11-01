#include"game.h"
void initBoard(char board[ROW][COL], int row, int col, char A)
{
	memset(board, A, row*col*sizeof(board[0][0]));
}
void layMines(char mine[ROW][COL], int row, int col,int number)
{
	while (number > 0)
	{
		int x = rand() % (row - 2) + 1;
		int y = rand() % (col - 2) + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			number--;
		}
	}
}
void displayBoard(char show[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("    ");
	for (i = 1; i < row - 1; i++)
	{
		printf(" %d  ", i);
	}
	printf("\n");
	printf("   ");
	for (i = 1; i < row - 1; i++)
	{
		printf("----");
	}
	printf("\n");
	for (i = 1; i < row - 1; i++)
	{
		printf("%2d |",i);
		for (j = 1; j < col - 1; j++)
		{
			printf(" %c |", show[i][j]);
		}
		printf("\n");
		printf("   ");
		for (j = 1; j < col - 1; j++)
		{
			printf("----");
		}
		printf("\n");
	}
}

void removeMines(char mine[ROW][COL], char show[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

}

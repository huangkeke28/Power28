#include"game.h"
void initBoard(char board[ROW][COL], int row, int col, char A)
{
	memset(board, A, row*col*sizeof(board[0][0]));
}
void layMines(char mine[ROW][COL], int row, int col,int number,int* x_p,int* y_p)
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
	int i = 0;
	
	for (i = 1; i <= row - 2; i++)
	{
		int j = 0;
		for (j = 1; j < col - 2; j++)
		{
			if (mine[i][j] == '0')
			{

				*x_p = i;
				*y_p = j;
				 break;
			}
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

void removeMines(char mine[ROW][COL], char show[ROW][COL], int row, int col, int* x_p, int* y_p)
{
	int times = 80;
	do
	{
		int x = 0;
		int y = 0;
		printf("请输入您要选择的目标：\n");
		printf(">");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 10 && y >= 1 && y <= 10 && show[x][y] == '*')
		{
			if (mine[x][y] == '1')
			{
				if (times == 80)
				{
					mine[x][y] = '0';
					mine[*x_p][*y_p];
					
				}
				else
				{
					printf("很遗憾，您输了，游戏结束！\n");
					displayBoard(mine, ROW, COL);
					break;
				}				
			}

			int count = mine[x - 1][y + 1] + mine[x - 1][y] + mine[x - 1][y + 1] + \
				mine[x][y + 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + \
				+ mine[x + 1][y + 1] - 8 * '0';
			show[x][y] = count + '0';
			times--;
			system("cls");
			displayBoard(show, ROW, COL);
		}
		else
		{
			printf("您输入的坐标错误，请重新输入！\n");
		}
	} while (times>0);
	if (times == 0)
	{
		printf("恭喜您，扫雷成功！！！\n");

	}
	
}

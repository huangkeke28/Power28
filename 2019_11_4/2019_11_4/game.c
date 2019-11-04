#include"game.h"
void setMines(char mine[ROW][COL], int row, int col,int MINES,int* x_p,int* y_p)//������
{
	while (MINES>0)
	{
		int x = rand() % (row - 2) + 1;
		int y = rand() % (col - 2) + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			MINES--;
		}
	}
	int i = 0;
	int j = 0;
	for (i = 1; i < row - 1; i++)
	{
		for (j = 1; j < col - 1; j++)
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

void displayBoard(char show[ROW][COL], int row, int col)//��������
{
	int i = 0;
	printf("    ");
	for (i = 1; i <= 10; i++)
	{
		printf("  %d ", i);
	}
	printf("\n");
	printf("    ");
	for (i = 1; i <= 10; i++)
	{
		printf("----");
	}
	printf("\n");
	for (i = 1; i < ROW - 1; i++)
	{
		printf(" %2d |", i);
		int j = 0;
		for (j = 1; j < COL - 1; j++)
		{
			printf(" %c |",show[i][j]);
		}
		printf("\n");
		printf("    ");
		for (j = 1; j < COL - 1; j++)
		{
			printf("----");
		}
		printf("\n");
	}
}
int mineCount(char mine[ROW][COL],int x,int y )//�����׵���Ŀ
{
	int count = 0;
	count = mine[x + 1][y + 1] + mine[x + 1][y] + mine[x + 1][y - 1] + \
		mine[x][y - 1] + mine[x][y + 1] + mine[x - 1][y + 1] + \
		mine[x - 1][y] + mine[x - 1][y - 1] - 8 * '0';
    return count + '0';

}
void openBoard(char mine[ROW][COL], char show[ROW][COL], int x, int y)//���û����ʵ��չ��
{
	if (mineCount(mine, x, y) == '0')
	{
		show[x][y] = '0';
		int i = 0;
		int j = 0;
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (show[i][j] == '*')
					openBoard(mine, show, i, j);
			}
		}
	}
	else
		show[x][y] = mineCount(mine, x, y);
}
void findMines(char mine[ROW][COL], char show[ROW][COL], int row, int col,int* x_p, int* y_p)//����
{
	int times = 80;
	while (times>0)
	{
		int x = 0;
		int y = 0;
		printf("��������Ҫ�ҵ����꣺<x,y>\n");
		printf(">");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 10 && y >= 1 && y <= 10 && show[x][y] == '*')
		{
			if (mine[x][y] == '1')
			{
				if (times == 80)
				{
					mine[x][y] = '0';
					mine[*x_p][*y_p] = '1';
				}
				else
				{
					printf("���ź�����Ϸ������\n");
					displayBoard(mine, ROW, COL);
					break;
				}
			}
			openBoard(mine, show, x, y);
			system("cls");
			displayBoard(show, ROW, COL);
			times--;
		}
		else
		{
			printf("���������������������!\n");
		}
	}
}
#ifndef  __GAME_H__
#define  __GAME_H__

#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)
#define ROW 12 //行
#define COL 12 //列
#define MINE 20  //雷的个数
void setMines(char mine[ROW][COL], int row, int col,int MINES,int* x_p,int* y_p);
void displayBoard(char show[ROW][COL], int row, int col);
void findMines(char mine[ROW][COL], char show[ROW][COL], int row, int col,int* x_p,int* y_p);

#endif

#ifndef __game_h__
#define __game_h__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define ROW 12
#define COL 12
#define Number 20
void initBoard(char board[ROW][COL], int row, int col, char A);
void layMines(char mine[ROW][COL], int row, int col, int number, int* x_p, int* y_p);
void displayBoard(char show[ROW][COL], int row, int col);
void removeMines(char mine[ROW][COL], char show[ROW][COL], int row, int col, int* x_p, int* y_p);

#endif
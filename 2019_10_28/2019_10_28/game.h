#pragma once
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
void initBoard(char board[ROWS][COLS], int rows, int cols, char fuhao );
void displayBoard(char board[ROWS][COLS], int row, int col);
//²¼À×
//ÅÅÀ×
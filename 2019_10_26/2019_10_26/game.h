//É¨À×ÓÎÏ·
#pragma once
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
void initBoard(char arr[ROWS][COLS], int rows, int cols, char set);
void dispalyBoard(char arr[ROWS][COLS], int row, int col);
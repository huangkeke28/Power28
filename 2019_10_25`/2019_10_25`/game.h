#pragma once
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)
#define ROW 3
#define COL 3
void initBoard(char board[ROW][COL], int row, int col);
void displayBoard(char board[ROW][COL], int row, int col);
void playerMove(char board[ROW][COL], int row, int col);
void computerMove(char board[ROW][COL], int row, int col);
char isWin(char board[ROW][COL], int row, int col);
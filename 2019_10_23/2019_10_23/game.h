#pragma once

////������
//#define ROW 3
//#define COL 3
//#include<stdio.h>
//#pragma warning(disable:4996)
//void menu();
//void InitArry(char arr[ROW][COL],int row,int col);
//void InitBoard(char arr[ROW][COL], int row, int col);
//void PlayerMove(char arr[ROW][COL], int row, int col);

#define ROW 3
#define COL 3
#include<stdio.h>
#include<string.h>//memset()
#include<time.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);
// '# '-- ���Ӯ
//' * '-- ����Ӯ
//' P' -- ƽ��
//'C '-- ����
char IsWin(char board[ROW][COL], int row, int col);
#define ROW 3
#define COL 3
#include <stdio.h>
#include <time.h>


void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL],int row ,int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);

//��������������Ϸ״̬

char Iswin(char board[ROW][COL], int row, int col);
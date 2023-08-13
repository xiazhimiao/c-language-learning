#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define HANG 3
#define LIE 3

//打印棋盘
void printf_chessboard(char arr[HANG][LIE], int hang, int lie);
//初始化数组
void initialize(char arr[HANG][LIE], int hang, int lie);
//玩家下棋
void player(char arr[HANG][LIE], int hang, int lie);
//电脑下棋
int computer(char arr[HANG][LIE], int hang, int lie);
//检查棋盘是否满了,满了返回0，没满返回1
int examine_chessboard(char arr[HANG][LIE], int hang, int lie);
//判断赢家，有赢家返回1，没有返回0
int Judging_winners(char arr[HANG][LIE], int hang, int lie);
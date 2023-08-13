#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define HANG 3
#define LIE 3

//��ӡ����
void printf_chessboard(char arr[HANG][LIE], int hang, int lie);
//��ʼ������
void initialize(char arr[HANG][LIE], int hang, int lie);
//�������
void player(char arr[HANG][LIE], int hang, int lie);
//��������
int computer(char arr[HANG][LIE], int hang, int lie);
//��������Ƿ�����,���˷���0��û������1
int examine_chessboard(char arr[HANG][LIE], int hang, int lie);
//�ж�Ӯ�ң���Ӯ�ҷ���1��û�з���0
int Judging_winners(char arr[HANG][LIE], int hang, int lie);
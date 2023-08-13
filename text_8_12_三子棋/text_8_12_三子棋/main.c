#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu() 
{
	printf("游戏菜单：输入1开始游戏，输入0结束游戏\n");
}
void game()
{
	char arr[HANG][LIE] = { 0 };
	initialize(arr, HANG, LIE);//初始化数组
	printf_chessboard(arr,HANG,LIE);//打印棋盘
	while (1)
	{
		player(arr, HANG, LIE);//玩家
		printf_chessboard(arr, HANG, LIE);
		if (computer(arr, HANG, LIE)!=0)
		{
			printf_chessboard(arr, HANG, LIE);
		}
		else
		{
			break;
		}
	}

}
int main()
{	
	srand((unsigned)time(NULL));//播种
	int a = 0;
	do{
		menu();
		printf("请输入:>");
		scanf("%d", &a);
		switch (a)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			break;
		}
	}while(a);
	return 0;
}
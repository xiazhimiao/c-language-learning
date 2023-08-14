#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void initialize(char arr[HANG][LIE], int hang, int lie)
{
	int i = 0;
	for (i = 0; i < hang; ++i)
	{
		int j = 0;
		for (j = 0; j < lie; ++j)
		{
			arr[i][j] = '*';
		}
	}
}
void printf_chessboard(char arr[HANG][LIE], int hang, int lie)
{
	int i = 0;
	for (i = 0; i < hang; ++i)
	{
		int j = 0;
		for (j = 0; j < lie; ++j)
		{
			printf(" %c", arr[i][j]);
		}
		printf("\n");
	}
}
void player(char arr[HANG][LIE], int hang, int lie)
{
	printf("玩家输入坐标x，y:>");
	int x = 0;
	int y = 0;
	while (1)
	{
		//getchar();
		scanf("\n%d,%d", &x, &y);
		if (arr[x-1][y-1] == '*')
		{
			arr[x-1][y-1] = '0';
			break;
		}
		else
		{
			printf("该坐标已经被占领了，请重新输入:>\n");
		}
	}

}
int computer(char arr[HANG][LIE], int hang, int lie)
{
	int x = 0;
	int y = 0;
	int a = examine_chessboard(arr,hang,lie);
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (arr[x][y] == '*')
		{
			arr[x][y] = '1';
			break;
		}else if(a==0)
		{
			printf("棋盘满了\n");
			return 0;
		}

	}
	printf("电脑输入坐标%d，%d\n",x+1,y+1);
	return 1;

}
int examine_chessboard(char arr[HANG][LIE], int hang, int lie)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hang; ++i)
	{
		for (j = 0; j < lie; ++j)
		{
			if (arr[i][j] == '*')
			{
				return 1;
			}
		}
	}
	return 0;
}
int Judging_winners(char arr[HANG][LIE], int hang, int lie)
{
	
	//行有三个赢
	if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][0]!='*')
	{
		return 1;
	}
	else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][0] != '*')
	{
		return 1;
	}
	else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][0] != '*')
	{
		return 1;
	}
	//列有三个赢
	if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[0][0] != '*')
	{
		return 1;
	}
	else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[0][1] != '*')
	{
		return 1;
	}
	else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[0][2] != '*')
	{
		return 1;
	}
	//对角线赢
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != '*')
	{
		return 1;
	}
	else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != '*')
	{
		return 1;
	}
	return 0;
}
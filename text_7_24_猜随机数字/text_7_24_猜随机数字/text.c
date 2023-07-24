#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void j()
{
	printf("#################\n");
	printf("######1.paly#####\n");
	printf("######0.exit#####\n");
	printf("#################\n");
}
void game()
{
	//生成1-100的随机整数
	int a1 = 0;
	int b = 0;
	a1 = rand() % 100 + 1;
	
	while (1)
	{
		//请输入一个1-100的整数：
		printf("请输入一个1-100的整数：");
		scanf("%d", &b);
		if (a1 > b)
		{
			printf("猜小了\n");
		}
		else if (a1 < b)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了！！！\n");
			break;
		}
	}
	
}
int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
	do
	{

		j();
		printf("请选择：");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择：\n");
			break;
		}
	} while (a);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu() 
{
	printf("��Ϸ�˵�������1��ʼ��Ϸ������0������Ϸ\n");
}
void game()
{
	char arr[HANG][LIE] = { 0 };
	initialize(arr, HANG, LIE);//��ʼ������
	printf_chessboard(arr,HANG,LIE);//��ӡ����
	while (1)
	{
		player(arr, HANG, LIE);//���
		if (Judging_winners(arr, HANG, LIE) == 1)
		{
			printf("��Ӯ�ˣ�����\n");
			break;
		}
		printf_chessboard(arr, HANG, LIE);
		if (computer(arr, HANG, LIE)!=0)
		{
			if (Judging_winners(arr, HANG, LIE) == 1)
			{
				printf("�����ˣ�����\n");
				break;
			}
			printf_chessboard(arr, HANG, LIE);
		}
		else
		{
			break;
		}
	}
	printf_chessboard(arr, HANG, LIE);

}
int main()
{	
	srand((unsigned)time(NULL));//����
	int a = 0;
	do{
		menu();
		printf("������:>");
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
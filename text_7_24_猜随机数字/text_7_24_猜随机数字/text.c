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
	//����1-100���������
	int a1 = 0;
	int b = 0;
	a1 = rand() % 100 + 1;
	
	while (1)
	{
		//������һ��1-100��������
		printf("������һ��1-100��������");
		scanf("%d", &b);
		if (a1 > b)
		{
			printf("��С��\n");
		}
		else if (a1 < b)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶��ˣ�����\n");
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
		printf("��ѡ��");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (a);
	return 0;
}
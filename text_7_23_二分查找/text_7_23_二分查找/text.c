#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 4;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int zuo = 0;
	int you = sz + 1;
	while (zuo<=you)
	{
		//�����������ܴ����λ�á�zuo+you����ֵ�������int��Χ
		int zhong = (zuo + you) / 2;
		//��һ��д����int zhong = zuo + (you - zuo) / 2;
		if (arr[zhong] > n)
		{
			you = you - 1;
		}
		else if (arr[zhong] < n)
		{
			zuo = zuo + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", zhong);
			break;
		}
		
	}
	if (zuo > you)
	{
		printf("�Ҳ���");
	}

	return 0;
}
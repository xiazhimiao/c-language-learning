#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 180");
again:
	printf("��ܰ��ʾ���رձ������𲻵�ȡ���ػ���Ŀ��\n������������������Խ���180s��ػ�:");
	scanf("%s",arr);
	if (strcmp(arr, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
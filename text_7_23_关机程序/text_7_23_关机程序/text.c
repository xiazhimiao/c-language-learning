#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 180");
again:
	printf("温馨提示：关闭本程序起不到取消关机的目的\n请输入我是猪，否则电脑将在180s后关机:");
	scanf("%s",arr);
	if (strcmp(arr, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
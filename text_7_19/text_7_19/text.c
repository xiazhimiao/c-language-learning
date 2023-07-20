#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%d\n",strlen("\n"));//字符常量的长度肯定为1
	printf("你好");
	char b[10] = "12345 6789";//10个数量
	return 0;
}
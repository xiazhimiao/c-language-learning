#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 100;
	int b = 0x11223344;
	printf("%p\n%p", &a, &b);
	return 0;
}
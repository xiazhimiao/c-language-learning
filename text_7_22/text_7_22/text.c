#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ref(int x)
{
	int d = 1;
	int i = 1;
	for (i = 1; i <= x; i++)
		d = d * i;
	return d;
}
int main()
{
	int i = 1;
	int n = 0;
	scanf("%d", &n);
	//int n = 2;
	int m = 0;
	for (i = 1; i <= n; i++)
	{
		m = m + ref(i);
	}
	printf("%d\n", m);
	return 0;
}
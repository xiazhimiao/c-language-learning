#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int i = 0;
int main()
{
	while (i < 100)
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);
		}
		i++;
		
	}
	return 0;
}

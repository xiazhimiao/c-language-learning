#include <stdio.h>
#include <windows.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d\n", i);
		i++;
	}
	Sleep(100000);
	return 0;
}

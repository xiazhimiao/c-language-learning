#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 5
void maopao(int arr[N], int sz)
{
	for (int i = 0; i < N-1; ++i)//0 1 2 3 4
	{
		for (int j = 0; j < N - 1-i; ++j)
		{
			//if (arr[j] > arr[j + 1])//ÉýÐò²Ù×÷
			if (arr[j] < arr[j + 1])//ÉýÐò²Ù×÷
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[N] = { 6,4,9,2,1 };
	//Ã°ÅÝÅÅÐò
	maopao(arr, N);
	for (int i = 0; i < N; ++i)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
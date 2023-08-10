#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int sum = 1;
//	int n = 0;
//	scanf("%d", &n);
//	while (1)
//	{
//		sum = sum * n;
//		n = n - 1;
//		if (n == 0)
//		{
//			break;
//		}
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//实现对数组大小为N的数组进行冒泡排序
#define N 5
void maopao(int arr[N], int sz)
{
	for (int i = 0; i < N - 1; ++i)
	{
		for (int j = 0; j < N - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
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
	int arr[N] = { 0 };
	for (int i = 1; i <= N; ++i)
	{
		scanf("%d", &arr[i - 1]);
	}
	maopao(arr, N);
	for (int i = 0; i < N; ++i)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
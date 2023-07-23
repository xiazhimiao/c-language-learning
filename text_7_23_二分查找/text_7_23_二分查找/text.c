#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 14;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int zuo = 0;
	int you = sz + 1;
	int zhong = (zuo + you) / 2;
	while (zuo<=you)
	{
		if (arr[zhong] > n)
		{
			you = you - 1;
			zhong = (zuo + you) / 2;
		}
		else if (arr[zhong] < n)
		{
			zuo = zuo + 1;
			zhong = (zuo + you) / 2;
		}
		else
		{
			printf("找到了，下标是：%d\n", zhong);
			break;
		}
		
	}
	if (zuo > you)
	{
		printf("找不到");
	}

	return 0;
}
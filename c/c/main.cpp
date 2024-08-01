#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int fun(int n)
{

	/**********Program**********/
	int  s = 0, i;
	for (i = 2; i < n; i++)
		if (n % 2 == 0) s = s + i;
	return s;

	/**********  End  **********/

}
int main()
{
	void yzj();
	printf("s=%d\n", fun(855));
	yzj();
}

void yzj()
{
	FILE* IN, * OUT;
	int iIN, iOUT, i;
	iOUT = -1;
	IN = fopen("17.in", "r");
	if (IN == NULL)
	{
		printf("Please Verify The Currernt Dir..It May Be Changed");
	}
	OUT = fopen("17.out", "w");
	if (OUT == NULL)
	{
		printf("Please Verify The Current Dir.. It May Be Changed");
	}
	for (i = 0; i < 10; i++)
	{
		fscanf(IN, "%d", &iIN);
		fprintf(OUT, "%d\n", iOUT);
	}
	fclose(IN);
	fclose(OUT);

	iOUT = fun(iIN);
}
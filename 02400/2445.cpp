#include <stdio.h>
#include <math.h>
int main()
{
	int num,i,j;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		for (j = 0; j < num * 2 - 2 * (i + 1); j++)
		{
			printf(" ");
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = num - 2; i >= 0; i--)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		for (j = 0; j < num * 2 - 2 * (i + 1); j++)
		{
			printf(" ");
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
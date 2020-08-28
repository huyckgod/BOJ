#include<stdio.h>
int Min(int a, int b);
int main()
{
	int arr[1001][3];
	int d[1001][3];
	int n,i,j;
	d[0][0] = 0;
	d[0][1] = 0;
	d[0][2] = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 1; i <= n; i++)
	{
		d[i][0] = Min(d[i - 1][2], d[i - 1][1]) + arr[i][0];
		d[i][1] = Min(d[i - 1][0], d[i - 1][2]) + arr[i][1];
		d[i][2] = Min(d[i - 1][0], d[i - 1][1]) + arr[i][2];
	}
	printf("%d", Min(Min(d[n][0], d[n][1]), d[n][2]));
}

int Min(int a, int b) 
{
	return a < b ? a : b;
}
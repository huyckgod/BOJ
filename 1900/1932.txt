#include <stdio.h>
int min(int a, int b);
int main()
{
	int n,i,j;
	int d[499][2];
	int arr[500][500];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < n - 1; i++)
	{
		d[i][0] = arr[n-1][i];
		d[i][1] = arr[n-1][i+1];
	}
	for (i = n-2; i >0; i--)
	{
		for (j = 0; j < i; j++)
		{
			d[j][0] = arr[i][j] + max(d[j][0], d[j][1]);
			d[j][1] = arr[i][j+1] + max(d[j+1][0], d[j+1][1]);
		}
	}
	printf("%d", arr[0][0] + max(d[0][0], d[0][1]));
}
int max(int a, int b)
{
	return a > b ? a : b;
}
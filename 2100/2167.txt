#include<stdio.h>
int main()
{
	int arr[300][300];
	int n, m,i,j,c,x1,x2,y1,y2,k,sum;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &c);
	for (i = 0; i < c; i++)
	{
		sum = 0;
		scanf("%d %d %d %d",&y1,&x1,&y2,&x2);
		for (j = 0; j < y2 - y1 + 1; j++)
		{
			for (k = 0; k < x2 - x1 + 1; k++)
			{
				sum += arr[y1-1+j][x1-1+k];
			}
		}
		printf("%d\n", sum);
	}
}
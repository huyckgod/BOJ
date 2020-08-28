#include<stdio.h>
int main()
{
	int x1, y1, x2, y2, r1, r2, c, i, d;
	scanf("%d", &c);
	for (i = 0; i<c; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = ((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		if ((d<(r1 + r2)*(r1 + r2)) && (d>(r1 - r2)*(r1 - r2)))
		{
			printf("2\n");
		}
		else if ((x1 == x2) && (y1 == y2) && (r1 == r2))
		{
			printf("-1\n");
		}
		else if (d == (r1 + r2)*(r1 + r2) || d == (r1 - r2)*(r1 - r2))
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
}
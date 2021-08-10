#include <stdio.h>
void quicksorting(int* arr, int m, int r);
int main()
{
	int n,cnt=0,t,o,nw;
	scanf("%d", &n);
	nw = n;
	while (1)
	{
		t = nw / 10;
		o = nw - t*10;
		nw = t + o;
		nw = (o * 10) + (nw - 10 * (nw / 10));
		cnt++;
		if (nw == n)
		{
			break;
		}
	}
	printf("%d", cnt);
}
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int strint5(char arr[]);
int strint6(char arr[]);
int main()
{
	char arr[10000];
	char brr[10000];
	int a[6];
	int b[6];
	int maxa, maxb, mina, minb,i,j;
	scanf("%s %s",arr,brr);
	printf("%d %d", strint5(arr) + strint5(brr), strint6(arr) + strint6(brr));
}
int strint6(char arr[])
{
	int i, sum=0, temp=1;
	for (i = strlen(arr) - 1; i >= 0; i--)
	{
		if (arr[i] == '5')
		{
			arr[i] = '6';
		}
		sum += temp*(arr[i] - '0');
		temp *= 10;
	}
	return sum;
}
int strint5(char arr[])
{
	int i, sum = 0, temp = 1;
	for (i = strlen(arr) - 1; i >= 0; i--)
	{
		if (arr[i] == '6')
		{
			arr[i] = '5';
		}
		sum += temp*(arr[i] - '0');
		temp *= 10;
	}
	return sum;
}
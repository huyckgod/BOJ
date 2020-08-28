#include <stdio.h>
void quick(int* arr, int left, int right);
void quickr(int* arr, int left, int right);
void quick(int* arr, int left, int right)
{
	int i, j, temp;
	i = left;
	j = right + 1;
	if (right > left)
	{
		while (i < j)
		{
			i++;
			j--;
			while (arr[i] < arr[left])
				i++;
			while (arr[j] > arr[left])
				j--;
			if (i < j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		temp = arr[left];
		arr[left] = arr[j];
		arr[j] = temp;
		quick(arr, left, j - 1);
		quick(arr, j + 1, right);
	}
}
void quickr(int* arr, int left, int right)
{
	int i, j, temp;
	i = left - 1;
	j = right;
	if (right > left)
	{
		while (i < j)
		{
			i++;
			j--;
			while (arr[i] > arr[right] && i<right)
				i++;
			while (arr[j] < arr[right] && j>left)
				j--;
			if (i < j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		temp = arr[right];
		arr[right] = arr[i];
		arr[i] = temp;
		quickr(arr, left, i - 1);
		quickr(arr, i + 1, right);
	}
}
int main()
{
	int n, i, sum = 0;
	int * arr;
	int * brr;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int)*n);
	brr = (int*)malloc(sizeof(int)*n);
	
	for (i = 0; i < n; i ++ )
	{
	scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &brr[i]);
	}
	quick(arr, 0, n - 1);
	quickr(brr, 0, n - 1);
	for (i = 0; i < n; i++)
	{
		sum+=arr[i]*brr[i];
	}
	printf("%d", sum);
}
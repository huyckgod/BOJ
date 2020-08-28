#include <stdio.h>
#pragma warning(disable:4996)
typedef struct tower
{
	int hight;
	int lazerin;
}tower;
int main()
{
	int num,i,temp;
	tower* arr;
	scanf("%d", &num);
	arr = (tower*)malloc(sizeof(tower)*num);
	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i].hight);
	}
	arr[0].lazerin = -1;
	printf("0 ");
	for (i = 1; i < num; i++)
	{
		if (arr[i].hight>arr[i - 1].hight)
		{
			temp = arr[i - 1].lazerin;
			while (temp!=-1 && arr[temp].hight<=arr[i].hight)
			{
				temp = arr[temp].lazerin;
			}
			arr[i].lazerin = temp;
		}
		else
		{
			arr[i].lazerin = i - 1;
		}
		printf("%d ", arr[i].lazerin+1);
	}
}
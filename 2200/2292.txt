#include <stdio.h>
#include <math.h>
int main()
{
	int num,i,room=1,root=1,pre;
	scanf("%d", &num);
	if (num == 1)
	{
		printf("1");
		return 0;
	}
	for (i = 1;; i++)
	{
		room += i * 6;
		root++;
		if (num <= room)
		{
			break;
		}
	}
	printf("%d", root);
}
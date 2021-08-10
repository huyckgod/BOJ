#include<stdio.h>
#include<stdlib.h>
int intcmp(const void *a, const void *b) {
	return *(int *)a > *(int *)b ? 1 : (*(int *)a < *(int *)b ? -1 : 0);
}
int main() {
	int i, a, sum = 0, n, p[1001] = { 0 }; scanf("%d", &n);
	for (i = 1; i <= n; i++) scanf("%d", &p[i]);
	qsort(p, n + 1, sizeof(int), intcmp);
	a = n;
	for (i = 1; i <= n; i++) {
        sum += a*p[i];
        a--;
	}
	printf("%d", sum);
}
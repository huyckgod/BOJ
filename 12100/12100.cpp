#include <iostream>
#include <vector>
#include <deque>
using namespace std;
long long arr[1000000];
long long n;
long long a, b;
long long num = 0;
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d %d", &a, &b);
	for (int i = 0; i < n; i++) {
		arr[i] -= a;
		if (arr[i] < 0) {
			arr[i] = 0;
		}
		if (arr[i] % b != 0) {
			num++;
		}
		num += arr[i] / b;
	}
	printf("%d", num+n);
	return 0;
}
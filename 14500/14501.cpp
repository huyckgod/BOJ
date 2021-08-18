#include <iostream>
#include<vector>
using namespace std;
int maxnum = 0;
int n;
vector<vector<int>> v(16, vector<int>(2, 0));
void sol(int dep, int num) {
	if (dep + v[dep][0] > n+1) {
		return;
	}
	num += v[dep][1];
	maxnum = maxnum > num ?  maxnum : num;
	for (int i = dep + v[dep][0]; i < n + 1; i++) {
		sol(i, num);
	}
	return;
}
int main()
{
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		cin >> v[i][0] >> v[i][1];
	}
	for (int i = 1; i < n + 1; i++) {
		sol(i, 0);
	}
	cout << maxnum;
	return 0;
}
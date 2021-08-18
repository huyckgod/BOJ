#include <iostream>
#include<vector>
using namespace std;
int num = 0;
vector<vector<int>> gear(5,vector<int>(8,0));
void sol(int n, int d, int dep) {
	if (n == 0 || n == 5) {
		return;
	}
	if (n < 4 && gear[n][2] != gear[n + 1][6] &&  (n + 1) != dep) {
		sol(n + 1, -d, n);
	}
	if (n > 1 && gear[n][6] != gear[n - 1][2] &&  (n - 1) != dep) {
		sol(n - 1, -d, n);
	}
	vector<int> v = gear[n];
	for (int i = 1; i < 7; i++) {
		gear[n][i] = v[i - d];
	}
	gear[n][0] = v[(8 - d) % 8];
	gear[n][7] = v[(7 - d) % 8];
	return;
}
int main()
{
	int k, n, d;
	bool a;
	string s;
	for (int i = 1; i < 5; i++) {
		cin >> s;
		for (int j = 0; j < 8; j++) {
			gear[i][j] = s[j] - '0';
		}
	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n >> d;
		sol(n, d, -1);
	}
	if (gear[1][0] == 1) {
		num += 1;
	}
	if (gear[2][0] == 1) {
		num += 2;
	}
	if (gear[3][0] == 1) {
		num += 4;
	}
	if (gear[4][0] == 1) {
		num += 8;
	}
	cout << num;
}
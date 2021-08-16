#include <iostream>
#include<vector>
using namespace std;
int maxnum = 0;
int a, b;
vector<vector<int>> v(500, vector<int>(500, 0));
void sol(int dir, int dep, int x, int y, int num) {
	((dir % 2 == 0) ? x : y) += ((dir < 2) ? 1 : -1);
	if (x < 0 || y < 0 || x == b || y == a) {
		return;
	}
	num += v[y][x];
	if (dep == 3) {
		maxnum = (maxnum > num ? maxnum : num);
		return;
	}
	sol(dir, dep + 1, x, y, num);
	sol((dir + 3) % 4, dep + 1, x, y, num);
	sol((dir + 1) % 4, dep + 1, x, y, num);
	return;
}
int main()
{
	for (int k = 0; k < 19; k++) {
		cin >> a >> b;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cin >> v[i][j];
			}
		}
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				sol(0, 1, j, i, v[i][j]);
				sol(1, 1, j, i, v[i][j]);
				sol(2, 1, j, i, v[i][j]);
				sol(3, 1, j, i, v[i][j]);
			}
		}
		for (int i = 0; i < a - 1; i++) {
			for (int j = 0; j < b - 2; j++) {
				maxnum = maxnum > (v[i][j] + v[i][j + 1] + v[i][j + 2] + v[i + 1][j + 1]) ? maxnum : (v[i][j] + v[i][j + 1] + v[i][j + 2] + v[i + 1][j + 1]);
			}
		}
		for (int i = 0; i < a - 1; i++) {
			for (int j = 0; j < b - 2; j++) {
				maxnum = maxnum > (v[i + 1][j] + v[i + 1][j + 1] + v[i + 1][j + 2] + v[i][j + 1]) ? maxnum : (v[i + 1][j] + v[i + 1][j + 1] + v[i + 1][j + 2] + v[i][j + 1]);
			}
		}
		for (int i = 0; i < a - 2; i++) {
			for (int j = 0; j < b - 1; j++) {
				maxnum = maxnum > (v[i][j] + v[i + 1][j] + v[i + 2][j] + v[i + 1][j + 1]) ? maxnum : (v[i][j] + v[i + 1][j] + v[i + 2][j] + v[i + 1][j + 1]);
			}
		}
		for (int i = 0; i < a - 2; i++) {
			for (int j = 0; j < b - 1; j++) {
				maxnum = maxnum > (v[i][j + 1] + v[i + 1][j + 1] + v[i + 2][j + 1] + v[i + 1][j]) ? maxnum : (v[i][j + 1] + v[i + 1][j + 1] + v[i + 2][j + 1] + v[i + 1][j]);
			}
		}
		cout << maxnum << endl;
		maxnum = 0;
	}
	return 0;
}



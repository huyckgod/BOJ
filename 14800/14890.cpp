#include <iostream>
#include<vector>
using namespace std;
int num = 0;
int n, l;
int d[2] = { -1,1 };
int dd[2] = { 0,1 };
int temp = 0;
vector<vector<int>> v(100, vector<int>(100, 0));
int main()
{
	cin >> n >> l;
	num = 2 * n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (v[i][j + 1] != v[i][j]) {
				int lnum = 0;
				int lowd = v[i][j + 1] < v[i][j] ? 1 : 0;
				int k = j + dd[lowd];
				int low = v[i][j + 1] < v[i][j] ? v[i][j + 1] : v[i][j];
				int hi = v[i][j + 1] > v[i][j] ? v[i][j + 1] : v[i][j];
				if (hi - low > 1) {
					num--;
					break;
				}
				for (;; k += d[lowd]) {
					lnum++;
					if (k == -1 || k == n ) {
						if (v[i][k] == low + 1) {
							temp = 1;
						}
						lnum--;
						break;
					}
					if (v[i][k] != low) {
						if (v[i][k] == low + 1) {
							temp = 1;
						}
						lnum--;
						break;
					}
				}

				if (lnum < l) {
					num--;
					temp = 0;
					break;
				}
				if (temp == 1 && (lnum < (l * 2))) {
					num--;
					temp = 0;
					break;
				}
				if (lowd == 1) {
					j += lnum;
					if (temp == 0) {
						j--;
					}
				}
				temp = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			int lnum = 0;
			if (v[j + 1][i] != v[j][i]) {
				int lowd = v[j + 1][i] < v[j][i] ? 1 : 0;
				int k = j + dd[lowd];
				int low = v[j + 1][i] < v[j][i] ? v[j + 1][i] : v[j][i];
				int hi = v[j + 1][i] > v[j][i] ? v[j + 1][i] : v[j][i];
				if (hi - low > 1) {
					num--;
					break;
				}
				for (;; k += d[lowd]) {
					lnum++;
					if (k == -1 || k == n) {
						lnum--;
						break;
					}
					if (v[k][i] != low) {
						if (v[k][i] == low + 1) {
							temp = 1;
						}
						lnum--;
						break;
					}
				}
				if (lnum < l) {
					num--;
					temp = 0;
					break;
				}
				if (temp == 1 && (lnum < (l * 2))) {
					num--;
					temp = 0;
					break;
				}
				if (lowd == 1) {
					j += lnum;
					if (temp == 0) {
						j--;
					}
				}
				temp = 0;
			}
		}
	}
	cout << num;
}
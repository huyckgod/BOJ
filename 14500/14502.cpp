#include <iostream>
#include<vector>
using namespace std;
int maxnum = 0;
int n, num = 0;
int a, b;
int i, j, k;
vector<vector<int>> v(8, vector<int>(8, 0));
vector<vector<int>> virus(8, vector<int>(8, 0));
vector<vector<int>> vv;
void viru(int x, int y) {
	if (x < 0 || y < 0 || x == b || y == a || virus[y][x] != 0) {
		return;
	}
	virus[y][x] = 2;
	viru(x + 1, y);
	viru(x - 1, y);
	viru(x, y - 1);
	viru(x, y + 1);
	return;
}
int main()
{
	cin >> a >> b;
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			cin >> v[i][j];
			if (v[i][j] == 2) {
				vector<int> vvv;
				vvv.push_back(j);
				vvv.push_back(i);
				vv.push_back(vvv);
			}
		}
	}
	for (i = 0; i < a * b; i++) {
		if (v[int(i / b)][i % b] != 0) {
			continue;
		}
		for (j = i + 1; j < a * b; j++) {
			if (v[int(j / b)][j % b] != 0) {
				continue;
			}
			for (k = j + 1; k < a * b; k++) {
				if (v[int(k / b)][k % b] != 0) {
					continue;
				}
				virus = v;
				virus[int(i / b)][i % b] = 1;
				virus[int(j / b)][j % b] = 1;
				virus[int(k / b)][k % b] = 1;
				for (int t = 0; t < vv.size(); t++) {
					viru(vv[t][0] - 1, vv[t][1]);
					viru(vv[t][0] + 1, vv[t][1]);
					viru(vv[t][0], vv[t][1] - 1);
					viru(vv[t][0], vv[t][1] + 1);
				}
				for (int tt = 0; tt < a; tt++) {
					for (int ttt = 0; ttt < b; ttt++) {
						if (virus[tt][ttt] == 0) {
							num++;
						}
					}
				}
				maxnum = maxnum > num ? maxnum : num;
				num = 0;
			}
		}
	}
	cout << maxnum;
}
#include <iostream>
#include<vector>
using namespace std;
int minnum = 10000000;
int dir[4][2] = {{0,-1},{1,0},{0,1},{-1,0}};
vector<vector<int>> map(8, vector<int>(8, 0));
vector<vector<int>> v;
int a, b;
vector<vector<int>> move(int x, int y, int d, vector<vector<int>> map) {
	while (1) {
		if (map[y][x] == 0) {
			map[y][x] = 7;
		}
		if (y + dir[d][1] == -1 || y + dir[d][1] == a || x + dir[d][0] == -1 || x + dir[d][0] == b || map[y + dir[d][1]][x + dir[d][0]] == 6) {
			break;
		}
		x += dir[d][0];
		y += dir[d][1];
	}
	return map;
}
void sol(int x, int y, int dep, int t, vector<vector<int>> map) {
	if (v.size() - 1 == dep) {
		int num = 0;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				if (map[i][j] == 0) {
					num++;
				}
			}
		}
		minnum = minnum < num ? minnum : num;
		return;
	}
	if (t == 1) {
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 0, map));
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 1, map));
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 2, map));
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 3, map));
	}
	else if (t == 2) {
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 0, move(x, y, 2, map)));
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 3, move(x, y, 1, map)));
	}
	else if (t == 3) {
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 1, move(x, y, 0, map)));
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 2, move(x, y, 1, map)));
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 3, move(x, y, 2, map)));
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 0, move(x, y, 3, map)));

	}
	else if (t == 4) {
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 2, move(x, y, 1, move(x, y, 0, map))));
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 3, move(x, y, 2, move(x, y, 1, map))));
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 0, move(x, y, 3, move(x, y, 2, map))));
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 1, move(x, y, 0, move(x, y, 3, map))));
	}
	else {
		sol(v[dep + 1][1], v[dep + 1][0], dep + 1, v[dep + 1][2], move(x, y, 3, move(x, y, 2, move(x, y, 1, move(x, y, 0, map)))));
	}
	return;
}
int main()
{
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> map[i][j];
			if (map[i][j] > 0 && map[i][j] < 6) {
				vector<int> vv;
				vv.push_back(i);
				vv.push_back(j);
				vv.push_back(map[i][j]);
				v.push_back(vv);
			}
		}
	}
	v.push_back(vector<int>(3, 0));
	sol(v[0][1], v[0][0], 0, v[0][2], map);
	cout << minnum;
}
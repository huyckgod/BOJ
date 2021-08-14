#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int t = 0;
int dir = 100;
//int dirn[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int dirn[4] = { 1,1,-1,-1 };
int main()
{
	int n, k, a, b, l, time1 = 0;
	vector<int> head(2, 0);
	vector<int> tail(2, 0);
	deque<vector<int>> bam;
	bam.push_back(head);
	char c;
	scanf_s("%d", &n);
	scanf_s("%d", &k);
	vector<vector<int>>v(n, vector<int>(n, 0));
	for (int i = 0; i < k; i++) {
		scanf_s("%d %d", &a, &b);
		v[a - 1][b - 1] = 1;
	}
	scanf_s("%d", &l);
	vector<pair<int, char>>vv;
	for (int i = 0; i < l; i++) {
		scanf_s("%d %c", &a, &c);
		vv.push_back(pair<int, char>(a, c));
	}
	v[0][0] = 2;
	while (1) {
		if (t == 25) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					printf_s("%d", v[i][j]);
				}
				printf_s("\n");
			}
			for (int i = 0; i < bam.size(); i++) {
				printf_s("%d %d\n", bam[i][0], bam[i][1]);
			}
			printf_s("%d",dir);
		}
		t++;
		head[dir % 2] += dirn[dir % 4];
		if (head[0] < 0 || head[1] < 0 || head[0] == n || head[1] == n || v[head[1]][head[0]] == 2) {
			break;
		}
		if (v[head[1]][head[0]] == 0) {
			v[tail[1]][tail[0]] = 0;
			v[head[1]][head[0]] = 2;
			bam.push_front(head);
			bam.pop_back();
			tail = bam.back();
		}
		else {
			v[head[1]][head[0]] = 2;
			bam.push_front(head);
		}
		if (vv[time1].first == t) {
			if (vv[time1].second == 'D') {
				dir++;
			}
			else {
				dir--;
			}
			time1++;
		}
	}
	printf_s("%d", t);
	return 0;
}
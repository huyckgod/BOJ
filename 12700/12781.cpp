#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

vector<vector<pair<long, long>>>line;

void input() {
	pair<long, long> p;
	vector<pair<long, long>> v, v1;
	cin >> p.first>> p.second;
	v.push_back(p);
	cin >> p.first >> p.second;
	v.push_back(p);
	line.push_back(v);
	cin >> p.first >> p.second;
	v1.push_back(p);
	cin >> p.first >> p.second;
	v1.push_back(p);
	line.push_back(v1);
}

void solve() {
	long a = line[0][0].first;
	long b = line[0][0].second;
	for (int i =0;i<2;i++)
	{
		for (int j =0;j<2;j++)
		{
			line[i][j].first -= a;
			line[i][j].second -= b;

		}
	}
	long cos_theta = line[0][1].first;
	long sin_theta = line[0][1].second;
	long x1 = line[1][0].first * cos_theta + line[1][0].second * sin_theta;
	long y1 = -(line[1][0].first * sin_theta) + line[1][0].second * cos_theta;
	long x2 = line[1][1].first * cos_theta + line[1][1].second * sin_theta;
	long y2 = -(line[1][1].first * sin_theta) + line[1][1].second * cos_theta;
	if (y1*y2 <0){
		cout << 1;
	}
	else
	{
		cout << 0;
	}
	return;
}

int main() {

	input();
	solve();

}
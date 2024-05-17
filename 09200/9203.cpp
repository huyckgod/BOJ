#include <iostream>
#include <utility>
#include<vector>
#include<algorithm>
#include<string>
#include <ctime>
using namespace std;

int months[4][11] = { 31,28,31,30,31,30,31,31,30,31,30,
31,28,31,30,31,30,31,31,30,31,30,
31,28,31,30,31,30,31,31,30,31,30,
31,29,31,30,31,30,31,31,30,31,30 };
int T, B, C;

pair<int, int> calcul(string s, int c) {
	string a, b;
	pair<int, int> result;
	int diff_a;
	int diff_b;
	int y = 365;
	b = s.substr(s.size() - 16);
	a = s.substr(s.size() - 33, 16);
	int a_y = stoi(a.substr(0, 4)) - 2013;
	int a_m = stoi(a.substr(5, 2)) - 1;
	int a_d = stoi(a.substr(8, 2)) - 1;
	int a_h = stoi(a.substr(11, 2));
	int a_M = stoi(a.substr(14, 2));
	int b_y = stoi(b.substr(0, 4)) - 2013;
	int b_m = stoi(b.substr(5, 2)) - 1;
	int b_d = stoi(b.substr(8, 2)) - 1;
	int b_h = stoi(b.substr(11, 2));
	int b_M = stoi(b.substr(14, 2));
	diff_a = a_y * 365 * 24 * 60;
	diff_b = b_y * 365 * 24 * 60;
	for(int i = 0; i < a_m; i++)
	{
		diff_a += months[a_y][i] * 24 * 60;
	}
	for(int i = 0; i < b_m; i++)
	{
		diff_b += months[b_y][i] * 24 * 60;
	}
	diff_a += a_d * 24 * 60;
	diff_b += b_d * 24 * 60;
	diff_a += a_h * 60;
	diff_b += b_h * 60;
	diff_a += a_M;
	diff_b += b_M;
	result.first = diff_a;
	result.second = diff_b + c;
	//cout << result.first << " " << result.second << endl;
	return result;
}
vector<pair<int, int>> Input() {
	string s;
	vector<pair<int, int>> v;
	cin >> B >> C;
	cin.ignore();
	for(int i = 0; i < B; i++)
	{
		getline(cin, s);
		v.push_back(calcul(s, C));
	}
	return v;
}
int solve(vector<pair<int, int>> v) {
	int n = 0;
	vector<pair<int, int>> room;
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
	{
		int k = 0;
		for(int j = 0; j < room.size(); j++)
		{
			if(room[j].second <= v[i].first)
			{
				room[j] = v[i];
				k = 1;
				break;
			}
		}
		if(k == 0)
		{
			room.push_back(v[i]);
		}
	}
	return room.size();
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> T;
	for(int i = 0; i < T; i++)
	{
		cout << solve(Input()) << endl;
	}

}
#include <iostream>
#include<vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
ll sum(vector<ll>& tree, int i)
{
	ll ans = 0;
	while(i > 0)
	{
		ans += tree[i];
		i -= (i & -i);
	}

	return ans;
}

void update(vector<ll>& tree, int i, ll diff)
{
	while(i < tree.size())
	{
		tree[i] += diff;
		i += (i & -i);
	}
}

int N, M;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a, b;
	long long result = 0;
	cin >> N >> M;
	vector<vector<long long>> arr(N+1);
	vector<long long>tree(N + 1);
	for(int i = 0; i < M; i++)
	{
		cin >> a >> b;
		arr[a].push_back(b);
	}
	int i = N;
	for(; i > 0; i--)
	{
		if(arr[i].size()) {
			break;
		}
	}
	for(int j = 0; j < arr[i].size(); j++)
	{
		update(tree, arr[i][j], 1);
	}
	i--;
	for(; i > 0; i--)
	{
		if (arr[i].size() == 0)
		{
			continue;
		}
		sort(arr[i].begin(), arr[i].end(), greater<>());
		for(int j = 0; j < arr[i].size(); j++)
		{
			result += sum(tree,arr[i][j] -1);
			update(tree,arr[i][j], 1);
		}
	}
	cout << result;
}
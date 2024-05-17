#include <iostream>
#include <vector>
using namespace std;
long long M;
int K;
long long result = 0;
int main()
{
	long long MM = 100000;
	cin >> M;
	cin >> K;
	if(M < 100000) MM = M;
	vector<int> k(K);
	vector<bool> m(100001);
	for(int i = 0; i < K; i++)
	{
		int a;
		cin >> a;
		k[i] = a;
	}
	m[0] = 1;
	for(int i = 1; i < MM + 1; i++)
	{
		bool flag = true;
		for(int j = 0; j < K; j++)
		{
			if(i - k[j] < 0) continue;
			if(m[(i - k[j])]) {
				flag = false;
				break;
			}
		}
		m[i] = flag;
		if(m[i]) result++;
	}
	int n = 1000;
	if(M > 100000)
	{
		for(; n >= 1; n--)
		{
			bool flag = true;
			for(int i = 0; i < n; i++)
			{
				if(m[100000 - (n - 1) + i] != m[100000 - (2 * n - 1) + i])
				{
					flag = false;
					break;
				}
			}
			if(flag)
			{
				break;
			}
		}
		long long n_of_1 = 0;
		long long mod_of_1 = 0;
		long long mod_ = (M - 100000) % n;
		long long N = (M - 100000) / n;
		for(int i = 0; i < mod_; i++)
		{
			if(m[100000 - (n - 1) + i]) mod_of_1++;
		}
		for(int i = n - 1; i >= 0; i--)
		{
			if(m[100000 - i]) n_of_1++;
		}
		result += n_of_1 * N;
		result += mod_of_1;
	}
	cout << result << endl;
}
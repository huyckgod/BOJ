#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n;
string dp[1000];
bool is_reverse[1000] = { 0, };
string string_sum(string s_a, string s_b) {
	int a, b, c, carry = 0;
	for(int i = 0; i < s_a.size(); i++)
	{
		a = s_a[i] - '0';
		b = 0;
		if(i < s_b.size())
		{
			b = s_b[i] - '0';
		}
		c = (a + b + carry) % 10;
		if((a + b + carry) / 10 == 1)
		{
			carry = 1;
		}
		else
		{
			carry = 0;
		}
		s_a[i] = c + '0';
	}
	if(carry != 0)
	{
		s_a.push_back(carry + '0');
	}
	return s_a;
}
int main() {

	string p = "1";
	dp[0] = "1";
	dp[1] = "1";

	for(int i = 5; i < 1002; i++)
	{
		p = string_sum(p, p);
		dp[i - 3] = string_sum(p, dp[i - 5]);
	}

	while(true)
	{
		if(scanf("%d", &n) == EOF)
		{
			break;
		}
		if(n == 0 || n == 1) {
			printf("0\n");
			continue;
		}
		if(!is_reverse[n - 2])
		{
			reverse(dp[n - 2].begin(), dp[n - 2].end());
			is_reverse[n - 2] = 1;
		}
		printf("%s\n", dp[n - 2].c_str());

	}
}
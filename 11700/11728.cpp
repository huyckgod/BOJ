#include <iostream>
#include <string>
using namespace std;
int N, M;
int arr[2][1000001];
string s = "";
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >>M;
	int i = 0;
	for(i = 0; i < N; i++)
	{
		cin >> arr[0][i];
	}
	for(i = 0; i < M; i++)
	{
		cin >> arr[1][i];
	}
	bool a = 0;
	int j = 0;
	if(arr[0][0] > arr[1][0]) {
		a = 1;
	}
	i = 0;
	for(; i < N || j < M;) {
		if(a)
		{
			s += to_string(arr[a][j]) + " ";
			if((arr[a][j + 1] > arr[!a][i] || j == M - 1) && i < N)
			{
				a = !a;
			}
			j++;
		}
		else
		{
			s += to_string(arr[a][i]) + " ";
			if((arr[a][i + 1] > arr[!a][j] || i == N - 1) && j < M)
			{
				a = !a;
			}
			i++;
		}
	}
	cout << s;
}
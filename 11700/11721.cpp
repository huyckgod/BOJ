#include<iostream>
#include<string>
using namespace std;
#pragma warning(disable:4996)
int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		printf("%c", s[i]);
		if (i % 10 == 9) {
			printf("\n");
		}
	}
}
#include<iostream>
#include<string>
using namespace std;
#pragma warning(disable:4996)
int main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
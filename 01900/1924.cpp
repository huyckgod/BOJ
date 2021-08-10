#include<iostream>
#include<string>
using namespace std;
#pragma warning(disable:4996)
int main() {
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int a, b;
	int sum = 0;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a - 1; i++) {
		sum += month[i];
	}
	sum += b;
	switch (sum % 7) {
	case 0:printf("SUN\n"); break;
	case 1:printf("MON\n"); break;
	case 2:printf("TUE\n"); break;
	case 3:printf("WED\n"); break;
	case 4:printf("THU\n"); break;
	case 5:printf("FRI\n"); break;
	case 6:printf("SAT\n"); break;
	}
}
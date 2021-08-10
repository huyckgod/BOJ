#include<iostream>
#pragma warning(disable:4996)
int main() {
    int num,a, b;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d,%d", &a, &b);
        printf("%d\n", a + b);
    }
}
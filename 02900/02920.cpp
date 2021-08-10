#include<stdio.h>
int main() {
    int a = 1, d = 1;
    int num;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &num);
        if (num != i + 1) {
            a = 0;
        }
        if (num != 8 - i) {
            d = 0;
        }
    }
    if (d == 1) {
        printf("descending");
        return 0;
    }
    if (a == 1) {
        printf("ascending");
        return 0;
    }
    printf("mixed");
    return 0;
}
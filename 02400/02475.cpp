#include<stdio.h>
int main() {
    int sum = 0,num;
    for(int i = 0 ; i<5;i++){
        scanf("%d",&num);
        sum+=num*num;
    }
    printf("%d",sum%10);
    return 0;
}
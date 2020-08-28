#include <stdio.h>
int fibo(int n);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",fibo(a+1));
}
int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
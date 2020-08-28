#include <stdio.h>
int fac(int n);
int main()
{
    int a;
    scanf("%d",&a);
    if(a==0){
        printf("1");
        return 0;
    }
    printf("%d",fac(a));
}
int fac(int n){
    if(n==1){
        return 1;
    }
    return fac(n-1)*n;
}
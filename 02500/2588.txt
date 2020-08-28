#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d\n%d\n%d\n%d",((b-(b/100)*100)-((b-(b/100)*100)/10)*10)*a,(b-(b/100)*100)/10*a,b/100*a,a*b);
}
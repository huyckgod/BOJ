// Example program
#include <iostream>
#include <string>
#include <math.h>
void Hmove(int n,int a,int b,int c);
using namespace std;
int main()
{
    int n,k;
    scanf("%d",&n);
    k=pow(2,n)-1;
    printf("%d\n",k);
    Hmove(n,1,2,3);
}
void Hmove(int n,int a,int b,int c){
    if(n==1){
        printf("%d %d\n",a,c);
        return;
    }
    Hmove(n-1,a,c,b);
    printf("%d %d\n", a, c);
    Hmove(n-1,b,a,c);
}
#include <stdio.h>

int main()
{
    int a,b,c=0,i,j,d=0,k=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        if(i==1){
            d =1;
        }
        for(j=2;j<i;j++){
            if(i%j==0){
                d = 1;
                break;
            }
        }
        if(d == 0){
            if(k==0){
                k = i;
            }
            c+=i;
        }
        d = 0;
    }
    if(c==0){
        printf("-1");
        return 0;
    }
    printf("%d\n%d",c,k);
}

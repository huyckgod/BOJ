#include <stdio.h>

int main()
{
    int a,b,c=0,i,j,d=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b);
        if(b==1){
            d =1;
        }
        for(j=2;j<b;j++){
            if(b%j==0){
                d = 1;
                break;
            }
        }
        if(d == 0){
            c++;
        }
        d = 0;
    }
    printf("%d",c);
}

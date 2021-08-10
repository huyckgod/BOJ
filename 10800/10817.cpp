#include <stdio.h>

int main()
{
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    if(b>a){
        temp = a;
        a=b;
        b=temp;
    }
    if(b>c){
        printf("%d",b);
    }else{
        if(c<a){
            printf("%d",c);
        }else{
            printf("%d",a);
        }
    }
}
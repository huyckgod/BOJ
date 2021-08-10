#include <stdio.h>

int main(void) {
    int n,i,test;
    float max=0,sum=0;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d",&n);
        if(max<n){
            max=n;
        }
        sum+=n;
    }
    printf("%f",((sum/max)*100)/test);
}
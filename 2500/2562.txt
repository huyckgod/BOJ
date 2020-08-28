#include <stdio.h>
int main(){
    int a=9,b,c,i,j;
    for(i=0;i<a;i++){
        scanf("%d",&j);
        if(i==0){
            b = j;
            c = i+1;
        }
        else{
            if(b<j){
                b = j;
                c = i+1;
            }
        }
    }
    printf("%d\n%d",b,c);
}
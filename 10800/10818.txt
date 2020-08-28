#include <stdio.h>
int main(){
    int a,b,c,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&j);
        if(i==0){
            b = j;
            c = j;
        }
        else{
            if(b<j){
                b = j;
            }
            if(c>j){
                c = j;
            }
        }
    }
    printf("%d %d",c,b);
}
#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k,a,b,t=1,c,g,step1,step2;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d %d",&b,&c);
        j = (int)sqrt((float)c-b);
        step1 = 2*j-1;
        if((c-b-j*j)==0){
            step2 = 0;
        }
        else if((c-b-j*j)<=j){
            step2 = 1;
        }else{
            step2 = 2;
        }
        printf("%d\n",step1+step2);
    }
}
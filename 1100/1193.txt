/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,k,a,b,t=0;
    scanf("%d",&a);
    for(i=1;;i++){
        t+=i;
        if(t>=a){
            b=i;
            t-=i;
            break;
        }
    }
    if(b%2==0){
        printf("%d/%d",1+(a-t-1),b-(a-t-1));
    }else{
        printf("%d/%d",b-(a-t-1),1+(a-t-1));
    }
    return 0;
}

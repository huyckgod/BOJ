/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        if((a-i*3)%5 == 0){
            break;
        }
        if(a<i*3){
            printf("-1");
            return 0;
        }
    }
    printf("%d",i+((a-i*3)/5));
}                                                             
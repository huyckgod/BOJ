/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if((c-a)%(a-b)!=0){
        d = (c-a)/(a-b)+2;
    }else{
        d = (c-a)/(a-b) +1;
    }
    printf("%d",d);
}

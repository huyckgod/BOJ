/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,d,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d %d %d",&d,&b,&c);
        printf("%d%02d\n",(c%d)? c%d:d,(c%d)?(c/d)+1:(c/d));
    }
}
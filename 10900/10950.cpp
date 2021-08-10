/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,i,b,c;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d %d",&b,&c);
        printf("%d\n",b+c);
    }
}

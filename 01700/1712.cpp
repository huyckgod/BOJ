/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    if(b>=c){
        if(a == 0){
            printf("0");
            return 0;
        }
        printf("-1");
        return 0;
    }
    printf("%d",(a/(c-b)+1));
}
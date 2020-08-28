/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a;
   scanf("%d",&a);
   if(a%4==0){
       if(a%100!=0||a%400==0){
           printf("1");
           return 0;
       }
   }
   printf("0");
}

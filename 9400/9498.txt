/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a,b;
   scanf("%d",&a);
   if(100>=a&&a>=90){
       printf("A");
   }
   else if(89>=a&&a>=80){
       printf("B");
   }
   else if(79>=a&&a>=70){
       printf("C");
   }
   else if(69>=a&&a>=60){
       printf("D");
   }
   else{
       printf("F");
   }
}

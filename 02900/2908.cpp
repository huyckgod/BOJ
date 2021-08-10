#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,num1=0,num2=0;
    char s1[3],s2[3];
    scanf("%s %s",s1,s2);
    num1+=(s1[2]-48)*100;
    num1+=(s1[1]-48)*10;
    num1+=(s1[0]-48);
    num2+=(s2[2]-48)*100;
    num2+=(s2[1]-48)*10;
    num2+=(s2[0]-48);
    if(num1<num2){
        printf("%d",num2);
    }
    else{
        
        printf("%d",num1);
    }
}

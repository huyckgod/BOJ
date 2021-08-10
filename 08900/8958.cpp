#include <stdio.h>
#include <string.h>
int main(void) {
    int n=0,i,j,test,sum=0;
    char s[80];
    scanf("%d",&test);
    for(i=0;i<test;i++){
       scanf("%s",s);
       for(j=0;j<strlen(s);j++){
           if(s[j]=='X'){
               n=0;
           }
           else{
               n++;
               sum+=n;
           }
       }
       printf("%d\n",sum);
       sum=0;
       n=0;
    }
}
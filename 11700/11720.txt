#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a,i,sum=0;
    char* s;
    scanf("%d",&a);
    s = (char*)malloc(sizeof(int)*a);
    scanf("%s",s);
    for(i=0;i<a;i++){
        sum+=(s[i]-48);
    }
    printf("%d",sum);
}

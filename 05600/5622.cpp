#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,sum=0;
    char s[15];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='Z'){
            sum+=10;
            continue;
        }
        if(s[i]>='S'){
            s[i]--;
        }
        sum+=((s[i]-65)/3)+3;
    }
    printf("%d",sum);
}

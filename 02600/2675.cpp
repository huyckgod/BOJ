#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[26];
    int i,a,k,j,l;
    char s[20];
    scanf("%d",&k);
    for(i=0;i<k;i++){
    scanf("%d %s",&a,s);
    for(j=0;j<strlen(s);j++){
        for(l=0;l<a;l++){
        printf("%c",s[j]);
            
        }
    }
    printf("\n");
    }
}

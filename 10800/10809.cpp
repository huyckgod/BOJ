#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[26];
    int i,a,k=0;
    char s[100];
    for(i=0;i<26;i++){
        arr[i] = -1;
    }
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        if(arr[s[i]-97]==-1){
            arr[s[i]-97] = i;
        }
    }
    for(i=0;i<26;i++){
        printf("%d ",arr[i]);
    }
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[26]={0};
    int i,max,k,j,l;
    int len;
    char s[1000000];
    scanf("%s",s);
    len = strlen(s);
    for(i=0;i<len;i++){
        if(s[i]<91){
            arr[s[i]-65]++;
        }else{
            arr[s[i]-97]++;
        }
    }
    max=arr[0];
    j=0;
    k=0;
    for(i=1;i<26;i++){
        if(max==arr[i]){
            k=1;
        }
        else if(max<arr[i]){
            max = arr[i];
            k=0;
            j=i;
        }
    }
    if(k==1){
        printf("?");
    }
    else{
        printf("%c",j+65);
    }
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,j,d=0,k=0;
    int arr[26]={0};
    char s[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",s);
        arr[s[0]-97] = 1;
        for(j=1;j<strlen(s);j++)
        {
            if(s[j]!=s[j-1])
            {
                if(arr[s[j]-97]==1)
                {
                    d = 1;
                    break;
                }
                arr[s[j]-97] = 1;
            }
        }
        if(d==1){
            k++;
        }
        d=0;
        for(j=0;j<26;j++){
            arr[j] =0;
        }
    }
    printf("%d",t-k);
    return 0;
}

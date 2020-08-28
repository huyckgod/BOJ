#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    int* arr;
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-2;i>=0;i--)
    {
        if(arr[i+1]==1)
        {
            arr[i]=1;
        }
        else if(arr[i]>=arr[i+1])
        {
            cnt+=(arr[i]-arr[i+1]+1);
            arr[i]-=(arr[i]-arr[i+1]+1);
        }
    }
    printf("%d",cnt);
}
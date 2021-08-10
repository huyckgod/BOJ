#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[42]={0};
    int i,a,k=0;
    for(i=0;i<10;i++){
        scanf("%d",&a);
        arr[a%42]++;
    }
    for(i=0;i<42;i++){
        if(arr[i]!=0){
            k++;
        }
    }
    printf("%d",k);
}

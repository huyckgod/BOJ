/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int arr[15][14];
    int i,j,k,sum=0,a,b,c,d;
    for(i=0;i<14;i++){
        arr[0][i] = i+1;
    }
    for(i=1;i<15;i++){
        for(j=0;j<14;j++){
            for(k=0;k<=j;k++){
                sum+=arr[i-1][k];
            }
            arr[i][j] = sum;
            sum = 0;
        }
    }
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&b);
        scanf("%d",&c);
        printf("%d\n",arr[b][c-1]);
    }
}
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n=0,i,j;
    float k=0,sum=0,test,size;
    float* arr;
    scanf("%f",&test);
    for(i=0;i<test;i++){
        scanf("%f",&size);
        arr = (float*)malloc(sizeof(float)*size);
        for(j=0;j<size;j++){
            scanf("%f",&arr[j]);
            sum += arr[j];
        }
        for(j=0;j<size;j++){
            if(arr[j]>sum/size){
                k++;
            }
        }
        printf("%.3f%\n",(k/size)*100);
        sum = 0;
        k = 0;
        free(arr);
    }
}
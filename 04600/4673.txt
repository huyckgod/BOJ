#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int d(int N){
    int New;
    if(N<10){
		New = N + N % 10;}
	else if (N < 100){
		New = N + N / 10 + N % 10;}
	else if (N < 1000){
		New = N + N / 100 + (N % 100)/10+ (N % 100)%10;}
	else if (N < 10000){
		New = N + N / 1000 + (N % 1000) / 100 + (N % 100) / 10+ (N % 100) %10;}
	return New;
}

int main()
{
    int arr[10000]={0};
    int i,a;
    for(i=0;i<10000;i++){
        a=d(i+1);
        if(a>10000){
            continue;
        }
        arr[a-1] = 1;
    }
    for(i=0;i<10000;i++){
        if(arr[i]==0){
            printf("%d\n",i+1);
        }
    }
}
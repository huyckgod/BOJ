/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
int Na[8] = {0};
int N;
int M;
int d=0;
bool arr[113] = {0};
using namespace std;
void NM(int i,int t){
    if(i==M&&t<=N){
        for(int j = 0;j<M;j++){
            printf("%d ",Na[j]);
        }
        printf("\n");
    }
    for(int j=t;j<N;j++){
        for(int k = 0 ;k<i;k++){
            if(Na[k]==j+1){
                d = 1;
            }
        }
        if(d == 1){
            d = 0;
            continue;
        }
        Na[i] = j+1; 
        NM(i+1,j+1);
    }
}
int main()
{
    cin>>N>>M;
    NM(0,0);
    return 0;
}
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
int Na[9] = {1};
int N;
int M;
int d=0;
bool arr[113] = {0};
using namespace std;
void NM(int i){
    if(i==M){
        for(int j = 0;j<M;j++){
            printf("%d ",Na[j+1]);
        }
        printf("\n");
        return;
    }
    for(int j=Na[i];j<=N;j++){
        Na[i+1] = j; 
        NM(i+1);
    }
}
int main()
{
    cin>>N>>M;
    NM(0);
    return 0;
}
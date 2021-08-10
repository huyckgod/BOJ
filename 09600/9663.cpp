/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;
int c = 0;
int N;
int chess[15];
int J(int a, int b){
    for(int i = 0;i<a;i++){
        if(chess[i] == b||fabs(chess[i]-b)==fabs(a-i)){
            return 0;
        }
    }
    return 1;
}
void NQ(int a){
    if(a == N){
        c++;
        return;
    }
    for(int i=0;i<N;i++){
        if(J(a,i)){
            chess[a] = i;
            NQ(a+1);
        }
    }
    return;
}
int main()
{
    cin>>N;
    NQ(0);
    cout<<c;
    return 0;
}
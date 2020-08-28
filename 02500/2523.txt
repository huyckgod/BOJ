#include<iostream>
using namespace std;
int main(){
    int x,i,j,k;
    cin >> x;
    for(i=0;i<x;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=x-1;i>0;i--){
        for(j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
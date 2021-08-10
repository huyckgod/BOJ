#include<iostream>
using namespace std;
int main(){
    int x,i,j,k;
    cin >> x;
    for(i=x-1;i>0;i--){
        for(j=0;j<x-1-i;j++){
            cout<<" ";
        }
        for(j=0;j<(i*2)+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=0;i<x;i++){
        for(j=0;j<x-1-i;j++){
            cout<<" ";
        }
        for(j=0;j<(i*2)+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
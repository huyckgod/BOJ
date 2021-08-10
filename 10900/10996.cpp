#include<iostream>
using namespace std;
int main(){
    int x,i,j,k;
    cin >> x;
    if(x==1){
        cout<<"*";
        return 0;
    }
    for(i=0;i<2*x;i++){
        if(i%2==0){
            for(j=0;j<(x+1)/2;j++){
                cout<<"* ";
            }
            cout<<endl;
        }else{
            if(x%2==1){
                for(j=1;j<(x+1)/2;j++){
                cout<<" *";
                }
            }else{
                for(j=0;j<(x+1)/2;j++){
                cout<<" *";
                }
            }
            cout<<endl;
        }
    }
}
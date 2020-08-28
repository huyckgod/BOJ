#include<iostream>
using namespace std;
int main(){
    int x,y,a,b,c,max1=2000,max2=2000;
    cin>>x>>y>>a>>b>>c;
    if(x<max1){
        max1=x;
    }
    if(y<max1){
        max1=y;
    }
    if(a<max1){
        max1=a;
    }
    if(b<max2){
        max2=b;
    }
    if(c<max2){
        max2=c;
    }
    cout<<(max2+max1)-50;
}
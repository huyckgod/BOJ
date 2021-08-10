#include<iostream>
using namespace std;
int main(){
    int x,y,a,b,c;
    cin>>x>>y>>a>>b>>c;
    if(x<40){
        x=40;
    }
    if(y<40){
        y=40;
    }
    if(a<40){
        a=40;
    }
    if(b<40){
        b=40;
    }
    if(c<40){
        c=40;
    }
    cout<<(x+y+a+b+c)/5;
}
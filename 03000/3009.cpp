#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    int m1,m2,m3;
    int x[3], y[3];
    scanf("%d %d %d %d %d %d",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2]);
    if(x[0]>x[1]){
        if(x[1]>x[2]){
            m1 = 1;
            m2 = 0;
            m3 = 2;
        }else if(x[0]<x[2]){
            m1 = 0;
            m2 = 1;
            m3 = 2;
        }
    }else if(x[0]<x[1]){
        if(x[1]<x[2]){
            m1 = 1;
            m2 = 0;
            m3 = 2;
        }else if(x[0]>x[2]){
            m1 = 0;
            m2 = 1;
            m3 = 2;
        }
    }else {
        m1 = 2;
        m2 = 0;
        m3 = 1;
    }
    if(x[0]==x[1]){
        if(y[0]==y[2]){m1 = 0,m2 = 1,m3 =2;}else if(y[1]==y[2]){m1 = 1,m2 = 0,m3 =2;}else{m1 = 2,m2 = 1,m3 =0;}
    }
    if(x[0]==x[2]){
        if(y[0]==y[1]){m1 = 0,m2 = 1,m3 =2;}else if(y[1]==y[2]){m1 = 2,m2 = 1,m3 =0;}else{m1 = 1,m2 = 0,m3 =2;}
    }
    if(x[2]==x[1]){
       if(y[1]==y[0]){m1 = 1,m2 = 0,m3 =2;}else if(y[0]==y[2]){m1 = 2,m2 = 1,m3 =0;}else{m1 = 0,m2 = 1,m3 =2;}
    }
    printf("%d %d",x[m3]+x[m2]-x[m1],y[m3]+y[m2]-y[m1]);
    
}

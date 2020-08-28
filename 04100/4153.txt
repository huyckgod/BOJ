#include<algorithm>
#include<cstdio>
#include <vector>

using namespace std;
int main(){
    int max,d;
    int v[3];
    while(1){
        scanf("%d %d %d",&v[0],&v[1],&v[2]);
        d=0;
        if(v[0]==0&&v[1]==0&&v[2]==0){
            return 0;
        }
        max = max_element(v,v+3)-v;
        if(max==0){
            if(v[max]*v[max] == v[1]*v[1]+v[2]*v[2]){
                d=1;
            }
        }
        else if(max==1){
            if(v[max]*v[max] == v[0]*v[0]+v[2]*v[2]){
                d=1;
            }
        }
        else{
            if(v[max]*v[max] == v[1]*v[1]+v[0]*v[0]){
                d=1;
            }
        }
        if(d==1){
            printf("right\n");
        }else{
            printf("wrong\n");
        }
    }
}

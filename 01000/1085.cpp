#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d",min(min(a,c-a),min(b,d-b)));
}
#include <iostream>
#include <algorithm>
using namespace std;
int Num[11];
int result1=-100000000;
int result2=100000000;
int ope[4];
int N;
void OI(int a,int result){
    if(a == N-1){
        result1 = max(result1,result);
        result2 = min(result2,result);
        return;
    }
    if(ope[0]){
        ope[0]--;
        OI(a+1,result+Num[a+1]);
        ope[0]++;
    }
    if(ope[1]){
        ope[1]--;
        OI(a+1,result-Num[a+1]);
        ope[1]++;
    }
    if(ope[2]){
        ope[2]--;
        OI(a+1,result*Num[a+1]);
        ope[2]++;
    }
    if(ope[3]){
        ope[3]--;
        OI(a+1,result/Num[a+1]);
        ope[3]++;
    }
    return;
}
int main()
{
    cin>>N;
    for(int i = 0 ;i<N;i++){
        cin>>Num[i];
    }
    for(int i = 0 ;i<4;i++){
        cin>>ope[i];
    }
    OI(0,Num[0]);
    cout<<result1<<endl<<result2;
    return 0;
}

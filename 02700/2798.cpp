#include <iostream>

using namespace std;

int main(){
    int a,b,i,max=0;
    int* c;
    cin >> a >> b;
    c = new int[a];
    for(i=0;i<a;i++){
        cin >> c[i];
    }
    int j,k;
    for(i=0;i<a-2;i++){
        for(j=i+1;j<a-1;j++){
            for(k=j+1;k<a;k++){
                if(c[i]+c[j]+c[k]>max&&c[i]+c[j]+c[k]<=b){
                    max = c[i]+c[j]+c[k];
                    if(max == b){
                        break;
                    }
                }
            }
        }
    }
    cout << max;
}

